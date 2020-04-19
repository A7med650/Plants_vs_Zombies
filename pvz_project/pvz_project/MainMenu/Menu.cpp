#include "Menu.h"

void Menu::initialization_BackGround()
{
	T_Menu.loadFromFile("../../assets/Day/MainMenu/MainMenu.png");
	R_Menu.setTexture(&T_Menu);
	R_Menu.setSize(Vector2f(1400.f, 767.f));
}

void Menu::initialization_btnStart()
{
	T_StartAdventure.loadFromFile("../../assets/Day/MainMenu/SelectorScreen_StartAdventure_Button1.png");
	T_StartAdventure_hover.loadFromFile("../../assets/Day/MainMenu/SelectorScreen_StartAdventure_Highlight.png");
	R_StartAdventure.setTexture(&T_StartAdventure);
	R_StartAdventure_hover.setTexture(&T_StartAdventure_hover);
	R_StartAdventure.setSize(Vector2f(600.f, 166.f));
	R_StartAdventure_hover.setSize(Vector2f(600.f, 166.f));
	R_StartAdventure.setPosition(Vector2f(695.f, 80.f));
	R_StartAdventure_hover.setPosition(Vector2f(695.f, 80.f));
}

void Menu::initialization_btnMiniGanes()
{
	T_MiniGames.loadFromFile("../../assets/Day/MainMenu/SelectorScreen_Survival_button.png");
	T_MiniGames_hover.loadFromFile("../../assets/Day/MainMenu/SelectorScreen_Survival_highlight.png");
	R_MiniGames.setTexture(&T_MiniGames);
	R_MiniGames_hover.setTexture(&T_MiniGames_hover);
	R_MiniGames.setSize(Vector2f(570.f, 166.f));
	R_MiniGames_hover.setSize(Vector2f(570.f, 166.f));
	R_MiniGames.setPosition(Vector2f(700.f, 200.f));
	R_MiniGames_hover.setPosition(Vector2f(700.f, 200.f));
}

void Menu::initialization_btnPuzzel()
{
	T_Puzzle.loadFromFile("../../assets/Day/MainMenu/SelectorScreen_Challenges_button.png");
	T_Puzzle_hover.loadFromFile("../../assets/Day/MainMenu/SelectorScreen_Challenges_highlight.png");
	R_Puzzle.setTexture(&T_Puzzle);
	R_Puzzle_hover.setTexture(&T_Puzzle_hover);
	R_Puzzle.setSize(Vector2f(520.f, 166.f));
	R_Puzzle_hover.setSize(Vector2f(520.f, 166.f));
	R_Puzzle.setPosition(Vector2f(710.f, 310.f));
	R_Puzzle_hover.setPosition(Vector2f(710.f, 310.f));
}

void Menu::initialization_btnSurvival()
{
	T_Survival.loadFromFile("../../assets/Day/MainMenu/SelectorScreen_Vasebreaker_button.png");
	T_Survival_hover.loadFromFile("../../assets/Day/MainMenu/SelectorScreen_vasebreaker_highlight.png");
	R_Survival.setTexture(&T_Survival);
	R_Survival_hover.setTexture(&T_Survival_hover);
	R_Survival.setSize(Vector2f(455.f, 166.f));
	R_Survival_hover.setSize(Vector2f(455.f, 166.f));
	R_Survival.setPosition(Vector2f(715.f, 410.f));
	R_Survival_hover.setPosition(Vector2f(715.f, 410.f));
}

void Menu::initialization_txtQuit()
{
	font.loadFromFile("../../assets/Font/SFBurlingtonScriptSC-Bold.ttf");
	txt_Quit.setFont(font);
	txt_Quit.setString("QUIT");
	txt_Quit.setPosition(Vector2f(1275.f, 642.f));
	txt_Quit.Bold;
	txt_Quit.setScale(Vector2f(1.5f, 1.5f));
	txt_Quit.setFillColor(Color(72, 72, 72));
}

void Menu::initialization_txtHelp()
{
	txt_Help.setFont(font);
	txt_Help.setString("HELP");
	txt_Help.setPosition(Vector2f(1140.f, 655.f));
	txt_Help.Bold;
	txt_Help.setScale(Vector2f(1.4f, 1.4f));
	txt_Help.setFillColor(Color(72, 72, 72));
}

void Menu::initialization_txtOptions()
{
	txt_Options.setFont(font);
	txt_Options.setString("OPTIONS");
	txt_Options.setPosition(Vector2f(1010.f, 620.f));
	txt_Options.Bold;
	txt_Options.setScale(Vector2f(1.3f, 1.3f));
	txt_Options.setFillColor(Color(72, 72, 72));
}

void Menu::initialization_MessageQuit()
{
	T_MessageQuit.loadFromFile("../../assets/Day/MainMenu/window_quit_burned.png");
	R_MessageQuit.setTexture(&T_MessageQuit);
	R_MessageQuit.setSize(Vector2f(780.f, 550.f));
	R_MessageQuit.setPosition(Vector2f(300.f, 90.f));
}

void Menu::initialization_btnQuit()
{
	T_btn.loadFromFile("../../assets/Day/MainMenu/image823.png");
	R_btnQuit.setTexture(&T_btn);
	R_btnQuit.setTextureRect(IntRect(0, 0, 250, 75));
	R_btnQuit.setSize(Vector2f(290.f, 90.f));
	R_btnQuit.setPosition(Vector2f(375.f, 500.f));
}

void Menu::initialization_btnCancel()
{
	T_btn.loadFromFile("../../assets/Day/MainMenu/image823.png");
	R_btnCancel.setTexture(&T_btn);
	R_btnCancel.setTextureRect(IntRect(0, 0, 250, 75));
	R_btnCancel.setSize(Vector2f(290.f, 90.f));
	R_btnCancel.setPosition(Vector2f(730.f, 500.f));
}

void Menu::initialization_txtMessageCancel()
{
	font_1.loadFromFile("../../assets/Font/Bungasai.ttf");
	txt_btnCancel.setFont(font_1);
	txt_btnCancel.setString("CANCEL");
	txt_btnCancel.setPosition(Vector2f(790.f, 515.f));
	txt_btnCancel.Bold;
	txt_btnCancel.setScale(Vector2f(1.5f, 1.5f));
	txt_btnCancel.setFillColor(Color::Green);
}

void Menu::initialization_txtMessageQuit()
{
	txt_btnQuit.setFont(font_1);
	txt_btnQuit.setString("Quit");
	txt_btnQuit.setPosition(Vector2f(470.f, 515.f));
	txt_btnQuit.Bold;
	txt_btnQuit.setScale(Vector2f(1.5f, 1.5f));
	txt_btnQuit.setFillColor(Color::Green);
}

void Menu::initialization_txtMessageBox()
{
	txt_MessageQuit_1.setFont(font_1);
	txt_MessageQuit_1.setString("Quit");
	txt_MessageQuit_1.setPosition(Vector2f(650.f, 230.f));
	txt_MessageQuit_1.Bold;
	txt_MessageQuit_1.setScale(Vector2f(1.2f, 1.2f));
	txt_MessageQuit_1.setFillColor(Color(204, 204, 0));

	txt_MessageQuit_2.setFont(font_1);
	txt_MessageQuit_2.setString("ARE YOU SURE YOU WISH TO");
	txt_MessageQuit_2.setPosition(Vector2f(480.f, 300.f));
	txt_MessageQuit_2.Bold;
	txt_MessageQuit_2.setFillColor(Color(204, 204, 0));

	txt_MessageQuit_3.setFont(font_1);
	txt_MessageQuit_3.setString("QUIT THE GAME?");
	txt_MessageQuit_3.setPosition(Vector2f(560.f, 360.f));
	txt_MessageQuit_3.Bold;
	txt_MessageQuit_3.setFillColor(Color(204, 204, 0));
}

void Menu::initialization_MessageHelp()
{
	T_MessageHelp.loadFromFile("../../assets/Day/MainMenu/hVqwdv.jpg");
	R_MessageHelp.setTexture(&T_MessageHelp);
	R_MessageHelp.setSize(Vector2f(1400.f, 767.f));
}

void Menu::MouseMoved_Mainbtn(RenderWindow& window, Event& event)
{
	if (Event::MouseMoved)
	{
		if ((event.mouseMove.x >= 695 && event.mouseMove.x <= 1270) && (event.mouseMove.y >= 85 && event.mouseMove.y <= 210))
			window.draw(R_StartAdventure_hover);
		if ((event.mouseMove.x >= 700 && event.mouseMove.x <= 1265) && (event.mouseMove.y >= 220 && event.mouseMove.y <= 320))
			window.draw(R_MiniGames_hover);
		if ((event.mouseMove.x >= 710 && event.mouseMove.x <= 1220) && (event.mouseMove.y >= 330 && event.mouseMove.y <= 420))
			window.draw(R_Puzzle_hover);
		if ((event.mouseMove.x >= 715 && event.mouseMove.x <= 1220) && (event.mouseMove.y >= 435 && event.mouseMove.y <= 515))
			window.draw(R_Survival_hover);
	}
}

void Menu::MouseMoved_Vasebtn(RenderWindow& window, Event& event)
{
	if (Event::MouseMoved)
	{
		if ((event.mouseMove.x >= 1275 && event.mouseMove.x <= 1335) && (event.mouseMove.y >= 642 && event.mouseMove.y <= 690))
			txt_Quit.setFillColor(Color::Green);
		else
			txt_Quit.setFillColor(Color(72, 72, 72));
	}
	if (Event::MouseMoved)
	{
		if ((event.mouseMove.x >= 1140 && event.mouseMove.x <= 1200) && (event.mouseMove.y >= 655 && event.mouseMove.y <= 690))
			txt_Help.setFillColor(Color::Green);
		else
			txt_Help.setFillColor(Color(72, 72, 72));
	}
	if (Event::MouseMoved)
	{
		if ((event.mouseMove.x >= 1010 && event.mouseMove.x <= 1120) && (event.mouseMove.y >= 620 && event.mouseMove.y <= 660))
			txt_Options.setFillColor(Color::Green);
		else
			txt_Options.setFillColor(Color(72, 72, 72));
	}
}

void Menu::MouseMoved_MessageCancel(RenderWindow& window, Event& event)
{
	if (Event::MouseMoved)
	{
		if ((event.mouseMove.x >= 730 && event.mouseMove.x <= 1020) && (event.mouseMove.y >= 500 && event.mouseMove.y <= 570))
			txt_btnCancel.setFillColor(Color(0, 51, 17));
		else
			txt_btnCancel.setFillColor(Color::Green);
	}
}

void Menu::MouseMoved_MessageQuit(RenderWindow& window, Event& event)
{
	if (Event::MouseMoved)
	{
		if ((event.mouseMove.x >= 375 && event.mouseMove.x <= 665) && (event.mouseMove.y >= 500 && event.mouseMove.y <= 570))
			txt_btnQuit.setFillColor(Color(0, 51, 17));
		else
			txt_btnQuit.setFillColor(Color::Green);
	}
}

bool Menu::MousePressed_btnQuit(RenderWindow& window)
{
	mouseposition = Mouse::getPosition(window);
	if (Mouse::isButtonPressed(Mouse::Left))
		if ((mouseposition.x >= 1275 && mouseposition.x <= 1335) && (mouseposition.y >= 642 && mouseposition.y <= 690))
		{
			ispressed_vaseQuit = true;
			return ispressed_vaseQuit;
		}
	return ispressed_vaseQuit;
}

bool Menu::MousePressed_btnCancel(RenderWindow& window)
{
	mouseposition = Mouse::getPosition(window);
	if (Mouse::isButtonPressed(Mouse::Left))
		if ((mouseposition.x >= 730 && mouseposition.x <= 1020) && (mouseposition.y >= 500 && mouseposition.y <= 570))
		{
			ispressed_vaseQuit = false;
			return ispressed_vaseQuit;
		}
	return ispressed_vaseQuit;
}

void Menu::MousePressed_btnMessageQuit(RenderWindow& window)
{
	mouseposition = Mouse::getPosition(window);
	if (Mouse::isButtonPressed(Mouse::Left))
		if ((mouseposition.x >= 375 && mouseposition.x <= 665) && (mouseposition.y >= 500 && mouseposition.y <= 570))
			window.close();
}

bool Menu::MousePressed_btnHelp(RenderWindow& window)
{
	mouseposition = Mouse::getPosition(window);
	if (Mouse::isButtonPressed(Mouse::Left))
		if ((mouseposition.x >= 1140 && mouseposition.x <= 1200) && (mouseposition.y >= 655 && mouseposition.y <= 690))
		{
			ispressed_vaseHelp = true;
			return ispressed_vaseQuit;
		}
	return ispressed_vaseHelp;
}

void Menu::MousePressed_btnMainMenuHelp(RenderWindow& window)
{
	mouseposition = Mouse::getPosition(window);
	if (Mouse::isButtonPressed(Mouse::Left))
		if ((mouseposition.x >= 570 && mouseposition.x <= 835) && (mouseposition.y >= 665 && mouseposition.y <= 710))
			ispressed_vaseHelp = false;
}

void Menu::display_Mainbtn(RenderWindow& window)
{
	window.draw(R_StartAdventure);
	window.draw(R_MiniGames);
	window.draw(R_Puzzle);
	window.draw(R_Survival);
}

void Menu::display_Vasebtn(RenderWindow& window)
{
	window.draw(txt_Quit);
	window.draw(txt_Help);
	window.draw(txt_Options);
}

void Menu::display_MessageQuit(RenderWindow& window)
{
	window.draw(R_MessageQuit);
	window.draw(R_btnQuit);
	window.draw(R_btnCancel);
	window.draw(txt_btnCancel);
	window.draw(txt_btnQuit);
}

void Menu::display_txtMessageQuit(RenderWindow& window)
{
	window.draw(txt_MessageQuit_1);
	window.draw(txt_MessageQuit_2);
	window.draw(txt_MessageQuit_3);
}

Menu::Menu()
{
	ispressed_vaseQuit = false;
	ispressed_vaseHelp = false;

	initialization_BackGround();
	initialization_btnStart();
	initialization_btnMiniGanes();
	initialization_btnPuzzel();
	initialization_btnSurvival();
	initialization_txtQuit();
	initialization_txtHelp();
	initialization_txtOptions();
	initialization_MessageQuit();
	initialization_btnQuit();
	initialization_btnCancel();
	initialization_txtMessageCancel();
	initialization_txtMessageQuit();
	initialization_txtMessageBox();
	initialization_MessageHelp();
}

void Menu::display_MainMenu(RenderWindow& window,Event& event)
{
	window.draw(R_Menu);
	display_Mainbtn(window);
	display_Vasebtn(window);
	MousePressed_btnQuit(window);
	MousePressed_btnCancel(window);
	if (!ispressed_vaseQuit)
	{
		MouseMoved_Mainbtn(window, event);
		MouseMoved_Vasebtn(window, event);
	}
	if (ispressed_vaseQuit)
	{
		display_MessageQuit(window);
		MouseMoved_MessageCancel(window, event);
		MouseMoved_MessageQuit(window, event);
		display_txtMessageQuit(window);
	}

	MousePressed_btnMessageQuit(window);
	MousePressed_btnHelp(window);
	MousePressed_btnMainMenuHelp(window);

	if (ispressed_vaseHelp)
	{
		window.clear();
		window.draw(R_MessageHelp);
	}
}
