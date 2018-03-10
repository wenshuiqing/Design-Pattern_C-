#include "InputHandler.h"


bool InputHandler::isPressed(Button btn) {
	if (msg == btn)
	{
		return true;
	}
	return false;
}

InputHandler::InputHandler()
{
	buttonX_ = std::make_shared<JumpCommand>();
	buttonY_ = std::make_shared<FireCommand>();
	buttonA_ = std::make_shared<SwapCommand>();
	buttonB_ = std::make_shared<LurchCommand>();
}


InputHandler::~InputHandler()
{
}

CommandPtr InputHandler::handleInput() {
	if (isPressed(BUTTON_X))
	{
		return buttonX_;
	}
	else if (isPressed(BUTTON_Y))
	{
		return buttonY_;
	}
	else if (isPressed(BUTTON_A))
	{
		return buttonA_;
	}
	else if (isPressed(BUTTON_B))
	{
		return buttonB_;
	}

	return nullptr;
}
