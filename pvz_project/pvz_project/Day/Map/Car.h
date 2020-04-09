#pragma once
#include"../../Main_pvz.h"
class Car
{
private:
	//Primitive Data Types
	//Timer
	//RectangleShapes
	//Textures
	Texture T_car;
	//Sprites
	Sprite S_car[5];
	//FloatRect
public:
	//Constructors
	Car();
	//member functions
	void move_car_to_start_game(bool& car_stop);
	void display(RenderWindow& window);
	//Destructor
};

