#pragma once

#include"Game.h"
#include"TextureManager.h"

struct Accuracy
{
	Accuracy(std::string stringname);
	~Accuracy();

	int xpos;
	int ypos;

	SDL_Texture* Acc;
	SDL_Rect Acc_rect;

	void update_acc();
	void render_acc();
	void delete_acc();

};
static Accuracy* accuracy;

