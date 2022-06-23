#pragma once
#include"Game.h"
#include"TextureManager.h"

struct Hp_bar
{
	SDL_Texture* BAR;
	SDL_Rect BAR_rect;

	Hp_bar(std::string filename);
	~Hp_bar();

	void bar_update();
	void bar_render();
	void bar_delete();

	int xpos;
	int ypos;
};
static Hp_bar* bar;

