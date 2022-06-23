#pragma once
#include"Game.h"

const int Key_Lightning_Height = 40;
const int Key1_Lightning_Width = 0;
const int Key2_Lightning_Width = 160;
const int Key3_Lightning_Width = 320;
const int Key4_Lightning_Width = 480;


struct Lightning1
{
	int xpos;
	int ypos;


	SDL_Texture* lightning_image;
	SDL_Rect lightning_rect;

	Lightning1(std::string filename);
	~Lightning1();

	void reset_lightning1();
	void delete_lightning1();
	void update_lightning1();
	void render_lightning1();

};
static Lightning1* lightning1;

struct Lightning2
{
	int xpos;
	int ypos;


	SDL_Texture* lightning_image;
	SDL_Rect lightning_rect;

	Lightning2(std::string filename);
	~Lightning2();

	void reset_lightning2();
	void delete_lightning2();
	void update_lightning2();
	void render_lightning2();

};
static Lightning2* lightning2;

struct Lightning3
{
	int xpos;
	int ypos;


	SDL_Texture* lightning_image;
	SDL_Rect lightning_rect;

	Lightning3(std::string filename);
	~Lightning3();

	void reset_lightning3();
	void delete_lightning3();
	void update_lightning3();
	void render_lightning3();

};
static Lightning3* lightning3;

struct Lightning4
{
	int xpos;
	int ypos;


	SDL_Texture* lightning_image;
	SDL_Rect lightning_rect;

	Lightning4(std::string filename);
	~Lightning4();

	void reset_lightning4();
	void delete_lightning4();
	void update_lightning4();
	void render_lightning4();

};
static Lightning4* lightning4;
