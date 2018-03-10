#pragma once
#include "PreDeclare.h"
#include "Command.h"
class InputHandler
{
public:
	InputHandler();
	virtual ~InputHandler();
	CommandPtr handleInput();
	bool isPressed(Button btn);
private:
	CommandPtr buttonX_;
	CommandPtr buttonY_;
	CommandPtr buttonA_;
	CommandPtr buttonB_;
};

