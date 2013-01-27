#version 150

uniform sampler2D tex;

in vec3 fposition;
in vec3 fnormal;
in vec2 ftexcoord;

out vec4 position;
out vec4 normal;
out vec4 albedo;

void main()
{
	position.xyz = fposition;
	normal.xyz   = normalize(fnormal);
	albedo.rgba  = texture(tex, ftexcoord);
}