#pragma once
#include <map>

class InputManager
{
public:
	InputManager();
	void StartInputCheck();
	void AddInputEvent(void *newFunction);
};