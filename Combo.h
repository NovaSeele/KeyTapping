#pragma once

#include"Game.h"
#include"TextureManager.h"

//------------------Combo----------------//
struct Combo
{
    int xpos;
    int ypos;
    std::string combo_str;

    void combo_update();
    void combo_render();
    void stop_combo();
    void combo_delete();

    SDL_Texture* COMBO;
    SDL_Rect COMBO_Rect;

    Combo(std::string stringname);
    ~Combo();
};
static Combo* combo;
//------------------Combo----------------//
