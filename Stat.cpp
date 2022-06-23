#include "Stat.h"

Great::Great(std::string stringname)
{
	stat = loadFont(stringname);
	stat_rect.w = 100;
	stat_rect.h = 30;

	xpos = 370;
	ypos = -9999;
}

Great::~Great()
{

}

void Great::delete_great()
{
	delete[] great;
	great = NULL;
}

void Great::render_great()
{
	SDL_RenderCopy(Game::renderer, stat, NULL, &stat_rect);
}

void Great::update_great()
{
	ypos++;
	if (ypos >= 255)
	{
		ypos = -99999;
	}
	stat_rect.x = xpos;
	stat_rect.y = ypos;
}

void Great::reset_great()
{
	ypos = 250;
}



Miss::Miss(std::string stringname)
{
	stat = loadFont(stringname);
	stat_rect.w = 100;
	stat_rect.h = 30;

	xpos = 370;
	ypos = -9999;
}

Miss::~Miss()
{

}

void Miss::delete_miss()
{
	delete[] miss;
	miss = NULL;
}

void Miss::render_miss()
{
	SDL_RenderCopy(Game::renderer, stat, NULL, &stat_rect);
}

void Miss::update_miss()
{
	ypos++;
	if (ypos >= 255)
	{
		ypos = -99999;
	}
	stat_rect.x = xpos;
	stat_rect.y = ypos;
}

void Miss::reset_miss()
{
	ypos = 250;
}



Bad::Bad(std::string stringname)
{
	stat = loadFont(stringname);
	stat_rect.w = 100;
	stat_rect.h = 30;

	xpos = 370;
	ypos = -9999;
}

Bad::~Bad()
{

}

void Bad::delete_bad()
{
	delete[] bad;
	bad = NULL;
}

void Bad::render_bad()
{
	SDL_RenderCopy(Game::renderer, stat, NULL, &stat_rect);
}

void Bad::update_bad()
{
	ypos++;
	if (ypos >= 255)
	{
		ypos = -99999;
	}
	stat_rect.x = xpos;
	stat_rect.y = ypos;
}

void Bad::reset_bad()
{
	ypos = 250;
}


Perfect::Perfect(std::string stringname)
{
	stat = loadFont(stringname);
	stat_rect.w = 100;
	stat_rect.h = 30;

	xpos = 370;
	ypos = -9999;
}

Perfect::~Perfect()
{

}

void Perfect::delete_perfect()
{
	delete[] perfect;
	perfect = NULL;
}

void Perfect::render_perfect()
{
	SDL_RenderCopy(Game::renderer, stat, NULL, &stat_rect);
}

void Perfect::update_perfect()
{
	ypos++;
	if (ypos >= 255)
	{
		ypos = -99999;
	}
	stat_rect.x = xpos;
	stat_rect.y = ypos;
}

void Perfect::reset_perfect()
{
	ypos = 250;
}