#include "TextureManager.h"
#include "SDL_ttf.h"

SDL_Texture* loadTexture(std::string filename)
{
    SDL_Texture* optimal = NULL;

    SDL_Surface* loading = IMG_Load(filename.c_str());
    if (loading == NULL)
        printf("Failed to load image \n");
    else
        optimal = SDL_CreateTextureFromSurface(Game::renderer, loading);

    SDL_FreeSurface(loading);
    return optimal; //( GPU use )
    //return IMG_LoadTexture(Game::renderer, filename.c_str()); ( CPU use )
}

SDL_Texture* loadFont(std::string stringname)
{
    if (TTF_Init() == 0)
    {
        TTF_Font* sans = TTF_OpenFont("Font/RobotoCondensed-Bold.ttf", 24);
        SDL_Color White = { 255,255,255 };
        SDL_Color Red = { 255,0,0 };

        SDL_Texture* font = NULL;

        SDL_Surface* font_surface = TTF_RenderText_Blended(sans, stringname.c_str(), White);

        if (font_surface == NULL)
        {
            printf("Failed to load font \n");
        }
        else
        {
            font = SDL_CreateTextureFromSurface(Game::renderer, font_surface);
        }
        SDL_FreeSurface(font_surface);
        TTF_CloseFont(sans);

        return font;
    }
    TTF_Quit();
}
