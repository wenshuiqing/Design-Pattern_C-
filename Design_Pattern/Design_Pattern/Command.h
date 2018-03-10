#pragma once
#include <iostream>
#include "GameActor.h"
enum Button
{
	BUTTON_X,
	BUTTON_Y,
	BUTTON_A,
	BUTTON_B
};

static int msg = 0;

class Command
{
public:

	virtual void execute(GameActor &actor) = 0;
};

class JumpCommand :public Command
{
public:

	virtual void execute(GameActor &actor);
};

class FireCommand :public Command
{
public:

	virtual void execute(GameActor &actor);
};
class SwapCommand :public Command
{
public:

	virtual void execute(GameActor &actor);
};
class LurchCommand :public Command
{
public:

	virtual void execute(GameActor &actor);
};


