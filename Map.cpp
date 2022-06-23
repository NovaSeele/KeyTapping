#include "Map.h"
#include"TextureManager.h"


Map::Map(std::string fileName)
{
    image = loadTexture(fileName);
    image_rect.w = 640;
    image_rect.h = 840;
}

Map::~Map()
{}

void Map::loadMap()
{
    SDL_RenderCopy(Game::renderer, image, NULL, NULL);
}
