#pragma once
#include"Game.h"
#include"TextureManager.h"

struct Great
{
	Great(std::string stringname);
	~Great();

	void update_great();
	void render_great();
	void delete_great();
	void reset_great();

	int xpos;
	int ypos;

	SDL_Texture* stat;
	SDL_Rect stat_rect;
};
static Great* great;

struct Bad
{
	Bad(std::string stringname);
	~Bad();

	void update_bad();
	void render_bad();
	void delete_bad();
	void reset_bad();

	int xpos;
	int ypos;

	SDL_Texture* stat;
	SDL_Rect stat_rect;
};
static Bad* bad;

struct Miss
{
	Miss(std::string stringname);
	~Miss();

	void update_miss();
	void render_miss();
	void delete_miss();
	void reset_miss();

	int xpos;
	int ypos;

	SDL_Texture* stat;
	SDL_Rect stat_rect;
};
static Miss* miss;


struct Perfect
{
	Perfect(std::string stringname);
	~Perfect();

	void update_perfect();
	void render_perfect();
	void delete_perfect();
	void reset_perfect();

	int xpos;
	int ypos;

	SDL_Texture* stat;
	SDL_Rect stat_rect;
};
static Perfect* perfect;
