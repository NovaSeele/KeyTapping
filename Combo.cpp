#include "Combo.h"

//------------------Combo--------------------//
Combo::Combo(std::string stringname)
{
    COMBO = loadFont(stringname);
    COMBO_Rect.w = 70;
    COMBO_Rect.h = 50;

    xpos = 380;
    ypos = 175;
}

Combo::~Combo()
{
    combo_delete();
}


void Combo::combo_update()
{
    COMBO_Rect.x = xpos;
    COMBO_Rect.y = ypos;
}

void Combo::combo_render()
{
    SDL_RenderCopy(Game::renderer, COMBO, NULL, &COMBO_Rect);
}

void Combo::stop_combo()
{
    ypos = -9999;
}

void Combo::combo_delete()
{
    delete[] combo;
    combo = NULL;
}
//------------------Combo--------------------//
