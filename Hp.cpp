#include "HP.h"


Hp::Hp(std::string filename)
{
	HP = loadTexture(filename);
	HP_rect.w = 55;
	HP_rect.h = 640;

	xpos = 745;
	ypos = 200;
}

Hp::~Hp()
{
	Hp_delete();
}

void Hp::Hp_update()
{
	if (ypos < 200)
	{
		ypos = 200;
	}
	HP_rect.x = xpos;
	HP_rect.y = ypos;
}

void Hp::Hp_render()
{
	SDL_RenderCopy(Game::renderer, HP, NULL, &HP_rect);
}

void Hp::Hp_delete()
{
	delete[] hp;
	hp = NULL;
}

void Hp::Hp_down()
{
	ypos++;
}

void Hp::Hp_up()
{
	ypos--;
}

void Hp::Hp_huge_down()
{
	ypos += 5;
}
void Hp::Hp_huge_up()
{
	ypos -= 5;
}

bool Hp::fail()
{
	if (ypos >= 945)
	{
		return true;
	}
	else
	{
		return false;
	}
}