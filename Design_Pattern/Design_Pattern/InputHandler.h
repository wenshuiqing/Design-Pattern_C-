#pragma once
#include "Command.h"
class InputHandler
{
public:
	InputHandler();
	virtual ~InputHandler();
	void handleInput();



private:
	Command * buttonX_;
	Command * buttonY_;
	Command * buttonA_;
	Command * buttonB_;

};

