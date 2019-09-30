#pragma once
#include "Module.h"
#include "Globals.h"
#include "ModuleInput.h"

class b2World; //If we don't write that class, then the program will crash at "b2World* myWorld = nullptr" because the compiler does not recognice the b2World
//So by doing this, the compiler will not crash. "b2World" is defined on .cpp but not on .h, that's the reason for the crash

#define METERS_TO_PIXELS(x) x*10
#define PIXEL_TO_METERS(x) x/10 

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
	b2World* world = nullptr;
	bool debug;
};