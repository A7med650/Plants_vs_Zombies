#pragma once
#include"../../Main_pvz.h"
class zombies_on_street
{
private:
	//Primitive Data Types
	int size_zombie1;
	int size_zombie2;
	static short r1, r2;
	float CurrentFrame = 0;
	float time;
	string str_convert;
	//Timer
	Clock clock;
	//RectangleShapes
	//Textures
	Texture* T_Zombie1;
	Texture* T_Zombie2;
	Texture* T_Zombie3;
	//Sprites
	Sprite* S_Zombie1;
	Sprite* S_Zombie2;
	Sprite* S_Zombie3;
	//FloatRect
	//member functions
	/*------------------------------------------------*/
	//initialization
	void initialization_Zombie_1();
	void initialization_Zombie_2();
	void initialization_Zombie_3();
	//display
	void display_zombie1(RenderWindow& window);
	void display_zombie2(RenderWindow& window);
	void display_zombie3(RenderWindow& window);
	/*------------------------------------------------*/
public:
	zombies_on_street();
	void random_Zombies();
	void display(RenderWindow& window);
};

