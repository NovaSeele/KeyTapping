#include"Game.h"
#include"TextureManager.h"
#include"Map.h"
#include<string>
#include"Lightning.h"
#include"Score.h"
#include"Combo.h"
#include"Accuracy.h"
#include"Stat.h"
#include"HP.h"
#include"Hp_bar.h"
#include"KeyPattern_SV.h"
#include"HighScore.h"
#include"Level.h"

SDL_Renderer* Game::renderer = nullptr;


Game::Game()
{}

Game::~Game()
{}

void Game::init(const char* title, int width, int height, bool fullscreen)
{
	int flags = 0;

	if (fullscreen)
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, flags);
		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer)
		{
			SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
		}

		isRunning = true;
	}
	

	key1_sv = new Key1_sv("Image/Key1-4.png");
	key2_sv = new Key2_sv("Image/Key1-4.png");
	key3_sv = new Key3_sv("Image/Key1-4.png");
	key4_sv = new Key4_sv("Image/Key1-4.png");


	background = new Map("Image/background - Copy.png");
	
	sv = new pattern_sv();


	lightning1 = new Lightning1("Image/Key1-4 - Lightning.png");
	lightning2 = new Lightning2("Image/Key1-4 - Lightning.png");
	lightning3 = new Lightning3("Image/Key1-4 - Lightning.png");
	lightning4 = new Lightning4("Image/Key1-4 - Lightning.png");

	perfect = new Perfect("Perfect");
	great = new Great("Great");
	bad = new Bad("Bad");
	miss = new Miss("X");

	hp = new Hp("Image/Hp.png");
	bar = new Hp_bar("Image/Hp_bar.png");

}

void Game::handleEvents()
{
	SDL_Event event;

	SDL_PollEvent(&event);

	switch (event.type)
	{
	case SDL_QUIT:
		isRunning = false;
		break;
	case SDL_KEYDOWN:
		score->updatescore();
		cnt--;
		switch (event.key.keysym.sym)
		{
		case SDLK_a:

			if (key1_sv->sv1_perfect())
			{
				hp->Hp_huge_up();
				perfect->reset_perfect();
				MaxScore += 320;
				ScoreShow += 320;
				ComboShow++;
			}
			else if (key1_sv->sv1_great())
			{
				hp->Hp_up();
				great->reset_great();
				MaxScore += 320;
				ScoreShow += 300;
				ComboShow++;
			}
			else if (key1_sv->sv1_bad())
			{
				hp->Hp_down();
				bad->reset_bad();
				MaxScore += 320;
				ScoreShow += 200;
				ComboShow++;
			}
			else if (key1_sv->sv1_miss())
			{
				hp->Hp_huge_down();
				miss->reset_miss();
				ComboShow = 0;
			}
			key1_sv->sv1_reset();
			lightning1->reset_lightning1();
			break;
		case SDLK_s:

			if (key2_sv->sv2_perfect())
			{
				hp->Hp_huge_up();
				perfect->reset_perfect();
				MaxScore += 320;
				ScoreShow += 320;
				ComboShow++;
			}
			else if (key2_sv->sv2_great())
			{
				hp->Hp_up();
				great->reset_great();
				MaxScore += 320;
				ScoreShow += 300;
				ComboShow++;
			}
			else if (key2_sv->sv2_bad())
			{
				hp->Hp_down();
				bad->reset_bad();
				MaxScore += 320;
				ScoreShow += 200;
				ComboShow++;
			}
			else if (key2_sv->sv2_miss())
			{
				hp->Hp_huge_down();
				miss->reset_miss();
				ComboShow = 0;
			}
			key2_sv->sv2_reset();
			lightning2->reset_lightning2();
			break;
		case SDLK_j:

			if (key3_sv->sv3_perfect())
			{
				hp->Hp_huge_up();
				perfect->reset_perfect();
				MaxScore += 330;
				ScoreShow += 320;
				ComboShow++;
			}
			else if (key3_sv->sv3_great())
			{
				hp->Hp_up();
				great->reset_great();
				MaxScore += 320;
				ScoreShow += 300;
				ComboShow++;
			}
			else if (key3_sv->sv3_bad())
			{
				hp->Hp_down();
				bad->reset_bad();
				MaxScore += 330;
				ScoreShow += 200;
				ComboShow++;
			}
			else if (key3_sv->sv3_miss())
			{
				hp->Hp_huge_down();
				miss->reset_miss();
				ComboShow = 0;
			}
			key3_sv->sv3_reset();
			lightning3->reset_lightning3();
			break;
		case SDLK_k:

			if (key4_sv->sv4_perfect())
			{
				hp->Hp_huge_up();
				perfect->reset_perfect();
				MaxScore += 320;
				ScoreShow += 320;
				ComboShow++;
			}
			else if (key4_sv->sv4_great())
			{
				hp->Hp_up();
				great->reset_great();
				MaxScore += 320;
				ScoreShow += 300;
				ComboShow++;
			}
			else if (key4_sv->sv4_bad())
			{
				hp->Hp_down();
				bad->reset_bad();
				MaxScore += 320;
				ScoreShow += 200;
				ComboShow++;
			}
			else if (key4_sv->sv4_miss())
			{
				hp->Hp_huge_down();
				miss->reset_miss();
				ComboShow = 0;
			}
			key4_sv->sv4_reset();
			lightning4->reset_lightning4();
			break;
		case SDLK_ESCAPE:
			isRunning = false;
			break;
		}
	default:
		break;
	}
}

void Game::update()
{

	//display level//
	if (cnt == 0)
	{
		lv_count++;
		cnt = 50;
		sv->speed_up();

		key1_sv->set1();
		key1_sv->continue1();

		key2_sv->set2();
		key2_sv->continue2();

		key3_sv->set3();
		key3_sv->continue3();

		key4_sv->set4();
		key4_sv->continue4();

	}
	std::string lv_str = "Level: " + std::to_string(lv_count);
	level = new Level(lv_str);


	//update max combo//
	if (ComboShow >= Max)
	{
		Max = ComboShow;
	}
	std::string temp = std::to_string(Max);
	std::string max_str = "Your max combo is " + temp;
	max_combo->max_delete();
	max_combo = new MaxCombo(max_str);
	max_combo->max_delete();

	//------------tranfer score to font ttf-------------//
	std::string score_show = std::to_string(ScoreShow);
	score_show.erase(score_show.size() - 7);
	score->deletescore();
	score = new Score(score_show);
	score->deletescore();

	//update max score//
	std::string score_str = "Your highscore is " + score_show;
	max_score->max_delete();
	max_score = new Max_Score(score_str);
	max_score->max_delete();


	//------------trafer combo-------------------------//
	std::string combo_show = std::to_string(ComboShow);
	combo->combo_delete();
	combo = new Combo(combo_show);
	combo->combo_delete();



	//------------tranfer accuracy--------------------//

	//----Accuracy-----//
	double Acc_raw = (ScoreShow / MaxScore) * 100;
	double Acc = round(Acc_raw * 1000) / 1000;

	std::string acc_show = std::to_string(Acc);
	acc_show.erase(acc_show.size() - 4);
	std::string acc_show_final = acc_show + " %";
	accuracy->delete_acc();
	accuracy = new Accuracy(acc_show_final);
	accuracy->delete_acc();


	score->scorecount();
	//pattern->update();


	lightning1->update_lightning1();
	lightning2->update_lightning2();
	lightning3->update_lightning3();
	lightning4->update_lightning4();


	key1_sv->sv1_record();
	if (key1_sv->sv1_fall())
	{
		ComboShow = 0;
		miss->reset_miss();
		hp->Hp_down();
	}
	key1_sv->sv1_update();


	key2_sv->sv2_record();
	if (key2_sv->sv2_fall())
	{
		ComboShow = 0;
		miss->reset_miss();
		hp->Hp_down();
	}
	key2_sv->sv2_update();


	key3_sv->sv3_record();
	if (key3_sv->sv3_fall())
	{
		ComboShow = 0;
		miss->reset_miss();
		hp->Hp_down();
	}
	key3_sv->sv3_update();


	key4_sv->sv4_record();
	if (key4_sv->sv4_fall())
	{
		ComboShow = 0;
		miss->reset_miss();
		hp->Hp_down();
	}
	key4_sv->sv4_update();

	combo->combo_update();
	score->updatescore();
	accuracy->update_acc();
	bar->bar_update();
	hp->Hp_update();

	perfect->update_perfect();
	great->update_great();
	bad->update_bad();
	miss->update_miss();

	if (hp->fail())
	{
		key1_sv->stop1();
		key2_sv->stop2();
		key3_sv->stop3();
		key4_sv->stop4();

		combo->combo_delete();
		combo->stop_combo();
	}
}

void Game::render()
{
	SDL_RenderClear(renderer);
	background->loadMap();

	
	key1_sv->sv1_render();
	lightning1->render_lightning1();

	
	key2_sv->sv2_render();
	lightning2->render_lightning2();

	
	key3_sv->sv3_render();
	lightning3->render_lightning3();

	
	key4_sv->sv4_render();
	lightning4->render_lightning4();

	score->renderscore();
	combo->combo_render();
	accuracy->render_acc();
	bar->bar_render();
	hp->Hp_render();

	perfect->render_perfect();
	great->render_great();
	bad->render_bad();
	miss->render_miss();

	level->render_level();

	if (hp->fail())
	{
		max_combo->max_render();
		max_score->max_render();
	}

	SDL_RenderPresent(renderer);
}

void Game::clean()
{
	
	key1_sv->sv1_delete();
	lightning1->delete_lightning1();

	
	key2_sv->sv2_delete();
	lightning2->delete_lightning2();

	
	key3_sv->sv3_delete();
	lightning3->delete_lightning3();

	
	key4_sv->sv4_delete();
	lightning4->delete_lightning4();

	score->deletescore();
	combo->combo_delete();
	accuracy->delete_acc();
	bar->bar_delete();
	hp->Hp_delete();


	perfect->delete_perfect();
	great->delete_great();
	bad->delete_bad();
	miss->delete_miss();


	SDL_DestroyWindow(window);
	window = NULL;
	SDL_DestroyRenderer(renderer);
	renderer = NULL;
	IMG_Quit();
	SDL_Quit();
}