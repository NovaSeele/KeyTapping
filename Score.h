#pragma once

#include"Game.h"
#include"TextureManager.h"

//------------------Score----------------//
struct Score
{
    int xpos;
    int ypos;

    SDL_Texture* SCORE;
    SDL_Rect SCORE_rect;

    void scorecount();
    void updatescore();
    void renderscore();
    void deletescore();

    Score(std::string stringname);
    ~Score();

};
static Score* score;
//------------------Score----------------//

