#pragma once
#include"../../Main_pvz.h"
class Zombies
{
private:
	//Primitive Data Types
	int size_zombies;
	//Timer
	//Textures
	Texture* T_zombies;
	//RectangleShapes
	//Sprites
	Sprite* S_zombies;
	//FloatRect
public:
	//Constructors
	Zombies();
	//member functions
	void display(RenderWindow& window);
	//Destructor
};

