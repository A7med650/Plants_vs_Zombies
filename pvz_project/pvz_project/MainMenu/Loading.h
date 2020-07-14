#pragma once
#include "../Main_pvz.h"
class Loading
{
private:
	//Primitive Data Types
	int size_Load;
	string convert_str2int;
	bool loading_end;
	float CurrentFrame = 0;
	float time;
	//Timer
	Clock clock;
	//RectangleShapes
	RectangleShape R_LoadBaclground;
	RectangleShape* R_Load;
	//Textures
	Texture T_LoadBaclground;
	Texture* T_Load;
	//Sprites
	//FloatRect
	//Vector
	Vector2i mouseposition;
public:
	//Constructors
	Loading();
	//member functions
	void display(RenderWindow& window);
	void display_Loading(RenderWindow& window, bool& click_loading);
	bool button_click_start(RenderWindow& window);
	//Destructor
};