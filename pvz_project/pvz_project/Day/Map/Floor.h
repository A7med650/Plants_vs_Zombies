#pragma once
#include"../../Main_pvz.h"

class zombies_on_street;
class Floor
{
private:
	zombies_on_street* z_on_s;
	//Primitive Data Types
	float currentframe = 0;
	bool viewer_zombies;
	//Timer
	Clock clock;
	//RectangleShapes
	RectangleShape R_floor;
	RectangleShape R_floor_sad1row;
	//Textures
	Texture T_floor;
	Texture T_floor_sad1row;
	Texture T_ChooseCards;
	//Sprites
	Sprite S_ChooseCards;
	//FloatRect
	FloatRect floatrect;
	//member functions
	/*------------------------------------------------*/
	//initialization
	void initialization_Floor();
	void initialization_Floor_sad1row();
	void initialization_ChooseCards();
	//display
	
public:
	//Constructors
	Floor();
	//member functions
	void view_zombies(RenderWindow& window);
	void set_view(RenderWindow& window);
	void green_floor(RenderWindow& window);
	void display(RenderWindow& window);
	void display_ChooseCards(RenderWindow& window);
	//Destructor
};

