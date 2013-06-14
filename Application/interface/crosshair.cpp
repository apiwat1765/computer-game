#include "module.h"

#include <functional>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
using namespace std;
using namespace sf;


pair<Texture*, Sprite*> ModuleInterface::LoadImage(string Path)
{
	Texture *texture = new Texture();
	Sprite *sprite = new Sprite();

	bool result = texture->loadFromFile(Name() + "/" + Path);
	if(!result)
	{
		Debug->Fail("image (" + Path + ") cannot be loaded");
		return make_pair(texture, sprite);
	}
	sprite->setTexture(*texture, true);

	return make_pair(texture, sprite);
}

void ModuleInterface::DrawCrosshair()
{
	auto wnd = Global->Get<RenderWindow>("window");

	wnd->draw(*crosshair.second);
}