#include "Lightning.h"
#include"TextureManager.h"

Lightning1::Lightning1(std::string filename)
{
	lightning_image = loadTexture(filename);
	lightning_rect.w = 160;
	lightning_rect.h = 40;

	xpos = 100;
	ypos = -9999;
}

Lightning1::~Lightning1()
{

}

void Lightning1::reset_lightning1()
{
	ypos = 799;
}

void Lightning1::delete_lightning1()
{
	delete[] lightning1;
	lightning1 = NULL;
}

void Lightning1::update_lightning1()
{
	ypos++;
	if (ypos >= 804)
	{
		ypos = -9999;
	}
	lightning_rect.x = xpos;
	lightning_rect.y = ypos;
}

void Lightning1::render_lightning1()
{
	SDL_RenderCopy(Game::renderer, lightning_image, NULL, &lightning_rect);
}
//-----------------Key1-------------------//



Lightning2::Lightning2(std::string filename)
{
	lightning_image = loadTexture(filename);
	lightning_rect.w = 160;
	lightning_rect.h = 40;

	xpos = 260;
	ypos = -9999;
}

Lightning2::~Lightning2()
{

}

void Lightning2::reset_lightning2()
{
	ypos = 799;
}

void Lightning2::delete_lightning2()
{
	delete[] lightning2;
	lightning2 = NULL;
}

void Lightning2::update_lightning2()
{
	ypos++;
	if (ypos >= 804)
	{
		ypos = -9999;
	}
	lightning_rect.x = xpos;
	lightning_rect.y = ypos;
}

void Lightning2::render_lightning2()
{
	SDL_RenderCopy(Game::renderer, lightning_image, NULL, &lightning_rect);
}
//-----------------Key2-------------------//



Lightning3::Lightning3(std::string filename)
{
	lightning_image = loadTexture(filename);
	lightning_rect.w = 160;
	lightning_rect.h = 40;

	xpos = 420;
	ypos = -9999;
}

Lightning3::~Lightning3()
{

}

void Lightning3::reset_lightning3()
{
	ypos = 799;
}

void Lightning3::delete_lightning3()
{
	delete[] lightning3;
	lightning3 = NULL;
}

void Lightning3::update_lightning3()
{
	ypos++;
	if (ypos >= 804)
	{
		ypos = -9999;
	}
	lightning_rect.x = xpos;
	lightning_rect.y = ypos;
}

void Lightning3::render_lightning3()
{
	SDL_RenderCopy(Game::renderer, lightning_image, NULL, &lightning_rect);
}
//-----------------Key3-------------------//



Lightning4::Lightning4(std::string filename)
{
	lightning_image = loadTexture(filename);
	lightning_rect.w = 160;
	lightning_rect.h = 40;

	xpos = 580;
	ypos = -9999;
}

Lightning4::~Lightning4()
{

}

void Lightning4::reset_lightning4()
{
	ypos = 799;
}

void Lightning4::delete_lightning4()
{
	delete[] lightning4;
	lightning4 = NULL;
}

void Lightning4::update_lightning4()
{
	ypos++;
	if (ypos >= 804)
	{
		ypos = -9999;
	}
	lightning_rect.x = xpos;
	lightning_rect.y = ypos;
}

void Lightning4::render_lightning4()
{
	SDL_RenderCopy(Game::renderer, lightning_image, NULL, &lightning_rect);
}
//-----------------Key4-------------------//