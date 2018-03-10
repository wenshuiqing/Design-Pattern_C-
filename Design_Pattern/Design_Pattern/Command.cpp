#include "Command.h"


void JumpCommand::execute(GameActor &actor) {
	actor.jump();
}
void FireCommand::execute(GameActor &actor) {
	actor.fireGun();
}
void LurchCommand::execute(GameActor &actor) {
	actor.lurchIneffectively();
}
void SwapCommand::execute(GameActor &actor) {
	actor.swapWeapon();
}
