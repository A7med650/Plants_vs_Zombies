#pragma once
#include "../Main_pvz.h"
class Menu
{
private:
	Vector2i mouseposition;
	//Primitive Data Types
	bool ispressed_vaseQuit;
	bool ispressed_vaseHelp;
	bool ispressedMessageNew_User;
	bool ispressed_CreatNewPlayer;
	short max_hand;
	static int number_players;
	string Name_player;
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
	RectangleShape R_Name;
	RectangleShape R_ChooseName, R_ChooseName_hover;
	RectangleShape R_NewUser;
	RectangleShape R_ListName;
	//Textures
	Texture T_Menu;
	Texture T_StartAdventure, T_StartAdventure_hover;
	Texture T_MiniGames, T_MiniGames_hover;
	Texture T_Puzzle, T_Puzzle_hover;
	Texture T_Survival, T_Survival_hover;
	Texture T_MessageQuit;
	Texture T_btn;
	Texture T_MessageHelp;
	Texture* T_Hand;
	Texture T_Name;
	Texture T_ChooseName, T_ChooseName_hover;
	Texture T_NewUser;
	Texture T_ListName;
	//Sprites
	Sprite* S_Hand;
	//Font
	Font font;
	Font font_1;
	Font font_ListName;
	Font font_NamePlayer;
	//Text
	Text txt_Quit;
	Text txt_Help;
	Text txt_Options;
	Text txt_btnQuit;
	Text txt_btnCancel;
	Text txt_MessageQuit_1, txt_MessageQuit_2, txt_MessageQuit_3;
	Text txt_CreateNewPlayer;
	Text txt_NamePLayer;
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
	void initialization_Hand();
	void initialization_ScreenName();
	void initialization_ChooseName();
	void initialization_NewUser();
	void initialization_ListName();
	//Mouse Hover
	void MouseMoved_Mainbtn(RenderWindow& window, Event& event);
	void MouseMoved_Vasebtn(RenderWindow& window, Event& event);
	void MouseMoved_MessageCancel(RenderWindow& window, Event& event);
	void MouseMoved_MessageQuit(RenderWindow& window, Event& event);
	void MouseMoved_ChooseName(RenderWindow& window, Event& event);
	void MouseMoved_CreateNewPlayer(RenderWindow& window, Event& event);
	//Mouse Pressed
	bool MousePressed_btnQuit(RenderWindow& window);
	bool MousePressed_btnCancel(RenderWindow& window);
	void MousePressed_btnMessageQuit(RenderWindow& window);
	bool MousePressed_btnHelp(RenderWindow& window);
	void MousePressed_btnMainMenuHelp(RenderWindow& window);
	bool MousePressed_btnSartGame(RenderWindow& window, bool& is_pressed);
	void MousePressed_btnCancel_NewUser(RenderWindow& window);
	void MousePressed_btnOk_NewUser(RenderWindow& window);
	void MousePressed_CreateNewPlayer(RenderWindow& window);
	//display
	void display_Mainbtn(RenderWindow& window);
	void display_Vasebtn(RenderWindow& window);
	void display_MessageQuit(RenderWindow& window);
	void display_txtMessageQuit(RenderWindow& window);
	void display_ScreenName(RenderWindow& window);
	void display_ChooseName(RenderWindow& window);
	//others
	void text_enter(Event& event, RenderWindow& window);
	/*------------------------------------------------*/
public:
	//Constructors
	Menu();
	//member function
	//Mouse Pressed
	
	//display
	void display_MainMenu(RenderWindow& window, Event& event, bool& is_pressedStart);
	void display_Hand(RenderWindow& window, int i);
	//Destructor
};

