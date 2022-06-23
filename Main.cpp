#include "Game.h"

Game* game = nullptr;

int main(int argc, char* argv[])
{
	const int FPS = 90;
	const int FPSDelay = 1000 / FPS;
	Uint32 FPSStart;
	int FPSTime;


	game = new Game();
	game->init("GameWindow", 840, 840, false);

	while (game->running())
	{
		FPSStart = SDL_GetTicks();

		game->handleEvents();
		game->update();
		game->render();

		FPSTime = SDL_GetTicks() - FPSStart;
		if (FPSDelay > FPSTime)
		{
			SDL_Delay(FPSDelay - FPSTime);
		}
	}

	game->clean();
	return 0;
}