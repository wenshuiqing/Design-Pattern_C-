#include "Command.h"



void jump() {
	std::cout << "jump" << std::endl;
}
void fireGun(){
	std::cout << "fireGun" << std::endl;
}
void swapWeapon() {
	std::cout << "swapWeapon" << std::endl;
}

void lurchIneffectively() {
	std::cout << "lurchIneffectively" << std::endl;
}

void JumpCommand::execute() {
	jump();
}
void FireCommand::execute() {
	fireGun();
}
void LurchCommand::execute() {
	lurchIneffectively();
}
void SwapCommand::execute() {
	swapWeapon();
}