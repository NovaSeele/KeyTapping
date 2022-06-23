#pragma once
#include"Game.h"
#include"TextureManager.h"

struct Hp
{
	Hp(std::string filename);
	~Hp();

	SDL_Texture* HP;
	SDL_Rect HP_rect;

	void Hp_update();
	void Hp_render();

	void Hp_down();
	void Hp_up();
	void Hp_huge_down();
	void Hp_huge_up();

	void Hp_delete();
	bool fail();

	int xpos;
	int ypos;
};
static Hp* hp;
