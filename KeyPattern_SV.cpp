#include "KeyPattern_SV.h"

int ypos_record1;
int ypos_record2;
int ypos_record3;
int ypos_record4;

int note_speed = 15;

int start[9] = { -100,-120,-140,-160,-180,-200,-220,-80,-60 };
int i1 = 0;
int i2 = 1;
int i3 = 8;
int i4 = 7;

//--------------------Key1_sv------------------//
Key1_sv::Key1_sv(std::string filename)
{
	sv1 = loadTexture(filename);

	sv1_rect.w = 160;
	sv1_rect.h = 40;

	xpos = 100;
	ypos = -100;
}

Key1_sv::~Key1_sv()
{
	sv1_delete();
}

void Key1_sv::sv1_update()
{
	ypos += note_speed;
	if (ypos >= 880)
	{
		ypos = -100;
	}
	sv1_rect.x = xpos;
	sv1_rect.y = ypos;
}

void Key1_sv::sv1_render()
{
	SDL_RenderCopy(Game::renderer, sv1, NULL, &sv1_rect);
}

void Key1_sv::sv1_delete()
{
	delete[] key1_sv;
	key1_sv = NULL;
}

void Key1_sv::sv1_record()
{
	if (ypos > 720)
	{
		ypos_record1 = ypos;
	}
}

void Key1_sv::sv1_reset()
{
	ypos = -100;
}

bool Key1_sv::sv1_perfect()
{
	if (ypos_record1 >= 800 && ypos_record1 <= 840)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Key1_sv::sv1_great()
{
	if (ypos_record1 >= 780 && ypos_record1 <= 860)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Key1_sv::sv1_bad()
{
	if (ypos_record1 >= 760 && ypos_record1 <= 860)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Key1_sv::sv1_miss()
{
	if (ypos_record1 <= 760 || ypos_record1 >= 860)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Key1_sv::sv1_fall()
{
	if (ypos_record1 >= 855)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Key1_sv::stop1()
{
	note_speed = 0;
	ypos = -9999;
}
void Key1_sv::continue1()
{
	ypos = start[i1];
}

void Key1_sv::set1()
{
	i1++;
	if (i1 >= 8)
	{
		i1 = 0;
	}
}


//--------------------Key1_sv------------------//
//
//
//
//
//
//--------------------Key2_sv------------------//
Key2_sv::Key2_sv(std::string filename)
{
	sv2 = loadTexture(filename);

	sv2_rect.w = 160;
	sv2_rect.h = 40;

	xpos = 260;
	ypos = -100;
}

Key2_sv::~Key2_sv()
{
	sv2_delete();
}

void Key2_sv::sv2_update()
{
	ypos += note_speed;
	if (ypos >= 880)
	{
		ypos = -100;
	}
	sv2_rect.x = xpos;
	sv2_rect.y = ypos;
}

void Key2_sv::sv2_render()
{
	SDL_RenderCopy(Game::renderer, sv2, NULL, &sv2_rect);
}

void Key2_sv::sv2_delete()
{
	delete[] key2_sv;
	key2_sv = NULL;
}

void Key2_sv::sv2_record()
{
	ypos_record2 = ypos;
}

void Key2_sv::sv2_reset()
{
	ypos = -100;
}

bool Key2_sv::sv2_perfect()
{
	if (ypos_record2 >= 800 && ypos_record2 <= 840)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Key2_sv::sv2_great()
{
	if (ypos_record2 >= 780 && ypos_record2 <= 860)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Key2_sv::sv2_bad()
{
	if (ypos_record2 >= 760 && ypos_record2 <= 860)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Key2_sv::sv2_miss()
{
	if (ypos_record2 <= 760 || ypos_record2 >= 860)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Key2_sv::sv2_fall()
{
	if (ypos_record2 >= 855)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void Key2_sv::stop2()
{
	note_speed = 0;
	ypos = -9999;
}
void Key2_sv::continue2()
{
	ypos = start[i2];
}
void Key2_sv::set2()
{
	i2++;
	if (i2 >= 8)
	{
		i3 = 0;
	}
}
//--------------------Key2_sv------------------//
//
//
//
//
//
//--------------------Key3_sv------------------//
Key3_sv::Key3_sv(std::string filename)
{
	sv3 = loadTexture(filename);

	sv3_rect.w = 160;
	sv3_rect.h = 40;

	xpos = 420;
	ypos = -100;
}

Key3_sv::~Key3_sv()
{
	sv3_delete();
}

void Key3_sv::sv3_update()
{
	ypos += note_speed;
	if (ypos >= 880)
	{
		ypos = -100;
	}
	sv3_rect.x = xpos;
	sv3_rect.y = ypos;
}

void Key3_sv::sv3_render()
{
	SDL_RenderCopy(Game::renderer, sv3, NULL, &sv3_rect);
}

void Key3_sv::sv3_delete()
{
	delete[] key3_sv;
	key3_sv = NULL;
}

void Key3_sv::sv3_record()
{
	ypos_record3 = ypos;
}

void Key3_sv::sv3_reset()
{
	ypos = -100;
}

bool Key3_sv::sv3_perfect()
{
	if (ypos_record3 >= 800 && ypos_record3 <= 840)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Key3_sv::sv3_great()
{
	if (ypos_record3 >= 780 && ypos_record3 <= 860)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Key3_sv::sv3_bad()
{
	if (ypos_record3 >= 760 && ypos_record3 <= 860)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Key3_sv::sv3_miss()
{
	if (ypos_record3 <= 760 || ypos_record3 >= 860)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Key3_sv::sv3_fall()
{
	if (ypos_record3 >= 855)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void Key3_sv::stop3()
{
	note_speed = 0;
	ypos = -9999;
}
void Key3_sv::continue3()
{
	ypos = start[i3];
}
void Key3_sv::set3()
{
	i3--;
	if (i3 == 0)
	{
		i3 = 8;
	}
}
//--------------------Key3_sv------------------//
//
//
//
//
//
//--------------------Key4_sv------------------//
Key4_sv::Key4_sv(std::string filename)
{
	sv4 = loadTexture(filename);

	sv4_rect.w = 160;
	sv4_rect.h = 40;

	xpos = 580;
	ypos = -100;
}

Key4_sv::~Key4_sv()
{
	sv4_delete();
}

void Key4_sv::sv4_update()
{
	ypos += note_speed;
	if (ypos >= 880)
	{
		ypos = -100;
	}
	sv4_rect.x = xpos;
	sv4_rect.y = ypos;
}

void Key4_sv::sv4_render()
{
	SDL_RenderCopy(Game::renderer, sv4, NULL, &sv4_rect);
}

void Key4_sv::sv4_delete()
{
	delete[] key4_sv;
	key4_sv = NULL;
}

void Key4_sv::sv4_record()
{
	ypos_record4 = ypos;
}

void Key4_sv::sv4_reset()
{
	ypos = -100;
}

bool Key4_sv::sv4_perfect()
{
	if (ypos_record4 >= 800 && ypos_record4 <= 840)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Key4_sv::sv4_great()
{
	if (ypos_record4 >= 780 && ypos_record4 <= 860)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Key4_sv::sv4_bad()
{
	if (ypos_record4 >= 760 && ypos_record4 <= 860)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Key4_sv::sv4_miss()
{
	if (ypos_record4 <= 760 || ypos_record4 >= 860)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Key4_sv::sv4_fall()
{
	if (ypos_record4 >= 855)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void Key4_sv::stop4()
{
	note_speed = 0;
	ypos = -9999;
}
void Key4_sv::continue4()
{
	ypos = start[i4];
}
void Key4_sv::set4()
{
	i4--;
	if (i4 == 0)
	{
		i4 = 7;
	}
}
//--------------------Key4_sv------------------//
//
//
//
//
//
//--------------------Pattern------------------//

void pattern_sv::speed_down()
{
	note_speed--;
}
void pattern_sv::speed_up()
{
	note_speed++;
}
