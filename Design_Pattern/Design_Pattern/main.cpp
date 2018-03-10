#include <memory>

#include "Command.h"
#include "InputHandler.h"
#include "GameActor.h"

int main() {

	std::unique_ptr<GameActor> actor(new GameActor);
	std::unique_ptr<InputHandler> input(new InputHandler);
	msg = 2;
	CommandPtr command = input->handleInput();
	if (command)
	{
		command->execute(*actor);
	}


	system("pause");
	return 0;
}