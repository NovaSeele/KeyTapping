#include "Hp_bar.h"

Hp_bar::Hp_bar(std::string filename)
{
	BAR = loadTexture(filename);
	BAR_rect.w = 100;
	BAR_rect.h = 640;

	xpos = 740;
	ypos = 200;
}

Hp_bar::~Hp_bar()
{
	bar_delete();
}

void Hp_bar::bar_delete()
{
	delete[] bar;
	bar = NULL;
}

void Hp_bar::bar_render()
{
	SDL_RenderCopy(Game::renderer, BAR, NULL, &BAR_rect);
}

void Hp_bar::bar_update()
{
	BAR_rect.x = xpos;
	BAR_rect.y = ypos;
}