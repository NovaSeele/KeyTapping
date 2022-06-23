 #pragma once

#include<SDL.h>
#include<iostream>
#include<SDL_image.h>
#include<SDL_ttf.h>
#include<SDL_mixer.h>
#include<string>
#include<vector>
#include<math.h>

class Game
{
public:
	Game();
	~Game();

	void init(const char* title, int width, int height, bool fullscreen);

	void handleEvents();
	void update();
	bool running() { return isRunning; }
	void render();
	void clean();

	static SDL_Renderer* renderer;

private:
	bool isRunning = false;
	SDL_Window* window;


	//----Score-----//
	int ComboShow = 0;
	int Max = 0;


	//----Combo-----//
	double ScoreShow = 300;


	//----MaxScore to count acc----//
	double MaxScore = 300;

	int cnt = 50;
	int lv_count = 1;
};