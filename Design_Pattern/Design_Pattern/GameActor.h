#pragma once
#include<iostream>
class GameActor
{
public:
	GameActor();
	virtual ~GameActor();
	void jump();
	void fireGun();
	void swapWeapon();
	void lurchIneffectively();
};

