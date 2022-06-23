#include "Score.h"


//------------------Score--------------------//
Score::Score(std::string stringname)
{
    SCORE = loadFont(stringname);
    SCORE_rect.w = 100;
    SCORE_rect.h = 55;

    xpos = 600;
    ypos = 0;
}

Score::~Score()
{
    deletescore();
}

void Score::scorecount()
{
}

void Score::deletescore()
{
    delete[] score;
    score = NULL;
}

void Score::updatescore()
{
    SCORE_rect.x = xpos;
    SCORE_rect.y = ypos;
}

void Score::renderscore()
{
    SDL_RenderCopy(Game::renderer, SCORE, NULL, &SCORE_rect);
}
//------------------Score---------------------//