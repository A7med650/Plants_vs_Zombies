#pragma once
#include"../../Main_pvz.h"
class Floor
{
private:
	//Primitive Data Types
	float currentframe = 0;
	bool viewer_zombies;
	//Timer
	Clock clock;
	//RectangleShapes
	RectangleShape R_floor;
	//Textures
	Texture T_floor;
	//Sprites
	//FloatRect
	FloatRect floatrect;
public:
	//Constructors
	Floor(RenderWindow& window);
	//member functions
	void view_zombies(RenderWindow& window);
	void green_floor(RenderWindow& window);
	void display(RenderWindow& window);
	//Destructor
};

