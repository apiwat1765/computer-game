#pragma once

#include "system.h"

#include <vector>
using namespace std;
#include <GLM/glm.hpp>
using namespace glm;


struct StorageMovable  : public Storage
{
	// vec3 Momentum;
};

struct StorageMovables : public Storage
{
	vector<StorageMovable> List;
};