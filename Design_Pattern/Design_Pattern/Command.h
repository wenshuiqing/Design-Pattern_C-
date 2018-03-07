#pragma once
#include <iostream>
enum Button
{
	BUTTON_X,
	BUTTON_Y,
	BUTTON_A,
	BUTTON_B
};

bool isPressed(Button btn);
void jump();
void fireGun();
void swapWeapon();
void lurchIneffectively();

class Command
{
public:
	Command();
	virtual ~Command();
	virtual void execute() = 0;
};

class JumpCommand :Command
{
public:
	JumpCommand();
	~JumpCommand();
	virtual void execute();
};

class FireCommand :Command
{
public:
	FireCommand();
	~FireCommand();
	virtual void execute();
};
class SwapCommand :Command
{
public:
	SwapCommand();
	~SwapCommand();
	virtual void execute();
};
class LurchCommand :Command
{
public:
	LurchCommand();
	~LurchCommand();
	virtual void execute();
};


