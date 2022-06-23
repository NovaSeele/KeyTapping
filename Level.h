#pragma once
#include"Game.h"
#include"TextureManager.h"

struct Level
{
	Level(std::string stringname);
	~Level();

	SDL_Texture* lv;
	SDL_Rect lv_rect;

	void render_level();


};
static Level* level;

