#include "Loading.h"

Loading::Loading()
{
	loading_end = true;
	size_Load = 10;
	R_Load = new RectangleShape[size_Load];
	T_Load = new Texture[size_Load];
	T_LoadBaclground.loadFromFile("../../assets/Day/MainMenu/Plantsvs.Zombies.png");
	R_LoadBaclground.setTexture(&T_LoadBaclground);
	R_LoadBaclground.setSize(Vector2f(1400.f, 767.f));
	for (int i = 0; i < size_Load; i++)
	{
		T_Load[i].loadFromFile("../../assets/Day/MainMenu/loading_0" + to_string(i + 1) + ".png");
		R_Load[i].setTexture(&T_Load[i]);
		R_Load[i].setSize(Vector2f(615.f, 160.f));
		R_Load[i].setPosition(Vector2f(380.f, 565.f));
	}
}

void Loading::display(RenderWindow& window)
{
	window.draw(R_LoadBaclground);
}

void Loading::display_Loading(RenderWindow& window, bool& click_loading)
{
	static int Load = 0;
	if (Load == size_Load)
	{
		click_loading = true;
		loading_end = false;
		Load = 9;
	}
	window.draw(R_Load[Load]);
	if (loading_end)
	{
		if (CurrentFrame > 20)
		{
			Load++;
			CurrentFrame = 0;
		}
		while (CurrentFrame <= 20)
		{
			time = float(clock.getElapsedTime().asMicroseconds());
			clock.restart();
			time = time / 800;
			CurrentFrame += float(0.05) * time;
			return;
		}
		CurrentFrame = 0;
	}
}

bool Loading::button_click_start(RenderWindow& window)
{
	mouseposition = Mouse::getPosition(window);
	if (Mouse::isButtonPressed(Mouse::Left))
		if ((mouseposition.x >= 420 && mouseposition.x <= 970) && (mouseposition.y >= 610 && mouseposition.y <= 700))
			return false;
	return true;
}
