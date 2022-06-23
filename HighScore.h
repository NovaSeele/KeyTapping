#pragma once
#include"Game.h"
#include"TextureManager.h"

struct MaxCombo
{
	MaxCombo(std::string stringname);
	~MaxCombo();

	SDL_Texture* max;
	SDL_Rect max_rect;

	void max_render();
	void max_delete();
};
static MaxCombo* max_combo;

struct Max_Score
{
	Max_Score(std::string stringname);
	~Max_Score();

	SDL_Texture* max;
	SDL_Rect max_rect;

	void max_render();
	void max_delete();
};
static Max_Score* max_score;

