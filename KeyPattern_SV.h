#pragma once
#include"Game.h"
#include"TextureManager.h"



struct Key1_sv
{
	Key1_sv(std::string filename);
	~Key1_sv();

	SDL_Texture* sv1;
	SDL_Rect sv1_rect;

	void sv1_update();
	void sv1_render();
	void sv1_delete();
	void sv1_reset();
	void sv1_record();

	bool sv1_perfect();
	bool sv1_great();
	bool sv1_bad();
	bool sv1_miss();
	bool sv1_fall();

	void stop1();
	void continue1();
	void set1();

	int xpos;
	int ypos;

};
static Key1_sv* key1_sv;


struct Key2_sv
{
	Key2_sv(std::string filename);
	~Key2_sv();

	SDL_Texture* sv2;
	SDL_Rect sv2_rect;

	void sv2_update();
	void sv2_render();
	void sv2_delete();
	void sv2_reset();
	void sv2_record();

	bool sv2_perfect();
	bool sv2_great();
	bool sv2_bad();
	bool sv2_miss();
	bool sv2_fall();

	void stop2();
	void continue2();
	void set2();

	int xpos;
	int ypos;

};
static Key2_sv* key2_sv;


struct Key3_sv
{
	Key3_sv(std::string filename);
	~Key3_sv();

	SDL_Texture* sv3;
	SDL_Rect sv3_rect;

	void sv3_update();
	void sv3_render();
	void sv3_delete();
	void sv3_reset();
	void sv3_record();

	bool sv3_perfect();
	bool sv3_great();
	bool sv3_bad();
	bool sv3_miss();
	bool sv3_fall();

	void stop3();
	void continue3();
	void set3();

	int xpos;
	int ypos;

};
static Key3_sv* key3_sv;


struct Key4_sv
{
	Key4_sv(std::string filename);
	~Key4_sv();

	SDL_Texture* sv4;
	SDL_Rect sv4_rect;

	void sv4_update();
	void sv4_render();
	void sv4_delete();
	void sv4_reset();
	void sv4_record();

	bool sv4_perfect();
	bool sv4_great();
	bool sv4_bad();
	bool sv4_miss();
	bool sv4_fall();

	void stop4();
	void continue4();
	void set4();

	int xpos;
	int ypos;

};
static Key4_sv* key4_sv;


struct pattern_sv
{
	void speed_down();
	void speed_up();
};
static pattern_sv* sv;



