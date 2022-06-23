#include "Level.h"

Level::Level(std::string stringname)
{
	lv = loadFont(stringname);
	lv_rect.w = 150;
	lv_rect.h = 50;
	lv_rect.x = 100;
	lv_rect.y = 0;
}

Level::~Level()
{

}

void Level::render_level()
{
	SDL_RenderCopy(Game::renderer, lv, NULL, &lv_rect);
}