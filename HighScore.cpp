#include "HighScore.h"

MaxCombo::MaxCombo(std::string stringname)
{
	max = loadFont(stringname);
	max_rect.w = 200;
	max_rect.h = 60;
	max_rect.x = 300;
	max_rect.y = 400;
}

MaxCombo::~MaxCombo()
{
	max_delete();
}

void MaxCombo::max_render()
{
	SDL_RenderCopy(Game::renderer, max, NULL, &max_rect);
}

void MaxCombo::max_delete()
{
	delete[] max_combo;
	max_combo = NULL;
}




Max_Score::Max_Score(std::string stringname)
{
	max = loadFont(stringname);
	max_rect.w = 200;
	max_rect.h = 60;
	max_rect.x = 300;
	max_rect.y = 450;
}

Max_Score::~Max_Score()
{
	max_delete();
}

void Max_Score::max_render()
{
	SDL_RenderCopy(Game::renderer, max, NULL, &max_rect);
}

void Max_Score::max_delete()
{
	delete[] max_combo;
	max_combo = NULL;
}