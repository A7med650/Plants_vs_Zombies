#pragma once
#include "../Main_pvz.h"
class Menu
{
private:
	Vector2i mouseposition;
	//Primitive Data Types
	bool ispressed_vaseQuit;
	bool ispressed_vaseHelp;
	//Timer
	//RectangleShapes
	RectangleShape R_Menu;
	RectangleShape R_StartAdventure, R_StartAdventure_hover;
	RectangleShape R_MiniGames, R_MiniGames_hover;
	RectangleShape R_Puzzle, R_Puzzle_hover;
	RectangleShape R_Survival, R_Survival_hover;
	RectangleShape R_MessageQuit;
	RectangleShape R_btnQuit, R_btnCancel;
	RectangleShape R_MessageHelp;
	//Textures
	Texture T_Menu;
	Texture T_StartAdventure, T_StartAdventure_hover;
	Texture T_MiniGames, T_MiniGames_hover;
	Texture T_Puzzle, T_Puzzle_hover;
	Texture T_Survival, T_Survival_hover;
	Texture T_MessageQuit;
	Texture T_btn;
	Texture T_MessageHelp;
	//Sprites
	//Font
	Font font;
	Font font_1;
	//Text
	Text txt_Quit;
	Text txt_Help;
	Text txt_Options;
	Text txt_btnQuit;
	Text txt_btnCancel;
	Text txt_MessageQuit_1, txt_MessageQuit_2, txt_MessageQuit_3;
	//member functions
	/*------------------------------------------------*/
	//initialization
	void initialization_BackGround();
	void initialization_btnStart();
	void initialization_btnMiniGanes();
	void initialization_btnPuzzel();
	void initialization_btnSurvival();
	void initialization_txtQuit();
	void initialization_txtHelp();
	void initialization_txtOptions();
	void initialization_MessageQuit();
	void initialization_btnQuit();
	void initialization_btnCancel();
	void initialization_txtMessageCancel();
	void initialization_txtMessageQuit();
	void initialization_txtMessageBox();
	void initialization_MessageHelp();
	//Mouse Hover
	void MouseMoved_Mainbtn(RenderWindow& window, Event& event);
	void MouseMoved_Vasebtn(RenderWindow& window, Event& event);
	void MouseMoved_MessageCancel(RenderWindow& window, Event& event);
	void MouseMoved_MessageQuit(RenderWindow& window, Event& event);
	//Mouse Pressed
	bool MousePressed_btnQuit(RenderWindow& window);
	bool MousePressed_btnCancel(RenderWindow& window);
	void MousePressed_btnMessageQuit(RenderWindow& window);
	bool MousePressed_btnHelp(RenderWindow& window);
	void MousePressed_btnMainMenuHelp(RenderWindow& window);
	//display
	void display_Mainbtn(RenderWindow& window);
	void display_Vasebtn(RenderWindow& window);
	void display_MessageQuit(RenderWindow& window);
	void display_txtMessageQuit(RenderWindow& window);
	/*------------------------------------------------*/
public:
	//Constructors
	Menu();
	//member function
	void display_MainMenu(RenderWindow& window, Event& event);
	//Destructor
};

