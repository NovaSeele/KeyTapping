#include "Accuracy.h"

Accuracy::Accuracy(std::string stringname)
{
	Acc = loadFont(stringname);
	Acc_rect.w = 70;
	Acc_rect.h = 50;

	xpos = 600;
	ypos = 50;
}

Accuracy::~Accuracy()
{
	delete_acc();
}

void Accuracy::update_acc()
{
	Acc_rect.x = xpos;
	Acc_rect.y = ypos;
}

void Accuracy::render_acc()
{
	SDL_RenderCopy(Game::renderer, Acc, NULL, &Acc_rect);
}

void Accuracy::delete_acc()
{
	delete[] accuracy;
	accuracy = NULL;
}





