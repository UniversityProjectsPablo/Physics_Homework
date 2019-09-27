#pragma once
#include "Module.h"
#include "Globals.h"

class b2World; //If we don't write that class, then the program will crash at "b2World* myWorld = nullptr" because the compiler does not recognice the b2World
//So by doing this, the compiler will not crash. "b2World" is defined on .cpp but not on .h, that's the reason for the crash

#define METER_TO_PIXEL 3779.5275591
#define PIXEL_TO_METER 0.0002645833

class ModulePhysics : public Module
{
public:
	ModulePhysics(Application* app, bool start_enabled = true);
	~ModulePhysics();

	bool Start();
	update_status PreUpdate();
	update_status PostUpdate();
	bool CleanUp();

private:
	b2World* myWorld = nullptr;
	bool debug;
};