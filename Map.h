#pragma once
#include"Game.h"
struct Map
{
    SDL_Texture* image;
    SDL_Rect image_rect;

    Map(std::string fileName);
    ~Map();

    void loadMap();
};

static Map* background;



