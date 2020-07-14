#include "zombies_on_street.h"

short zombies_on_street::r1;
short zombies_on_street::r2;

void zombies_on_street::initialization_Zombie_1()
{
	size_zombie1 = 11;
	T_Zombie1 = new Texture[size_zombie1];
	S_Zombie1 = new Sprite[size_zombie1];
	for (int i = 0; i < size_zombie1; i++)
	{
		T_Zombie1[i].loadFromFile("../../assets/Day/Zombies/Zombie1/1[" + to_string(i + 1) + "].png");
		S_Zombie1[i].setTexture(T_Zombie1[i]);
		S_Zombie1[i].setPosition(Vector2f(1200.f, 300.f));
	}
}

void zombies_on_street::initialization_Zombie_2()
{
	size_zombie2 = 22;
	T_Zombie2 = new Texture[size_zombie2];
	S_Zombie2 = new Sprite[size_zombie2];
	for (int i = 0; i < size_zombie2; i++)
	{
		T_Zombie2[i].loadFromFile("../../assets/Day/Zombies/Zombie2/2[" + to_string(i + 1) + "].png");
		S_Zombie2[i].setTexture(T_Zombie2[i]);
		S_Zombie2[i].setPosition(Vector2f(1100.f, 100.f));
	}
}

void zombies_on_street::initialization_Zombie_3()
{
	size_zombie1 = 11;
	T_Zombie3 = new Texture[size_zombie1];
	S_Zombie3 = new Sprite[size_zombie1];
	for (int i = 0; i < size_zombie1; i++)
	{
		T_Zombie3[i].loadFromFile("../../assets/Day/Zombies/Zombie3/3[" + to_string(i + 1) + "].png");
		S_Zombie3[i].setTexture(T_Zombie3[i]);
		S_Zombie3[i].setPosition(Vector2f(1100.f, 200.f));
	}
}

void zombies_on_street::display_zombie1(RenderWindow& window)
{
	static int zombie1 = 0;
	if (zombie1 == size_zombie1)
		zombie1 = 0;
	window.draw(S_Zombie1[zombie1]);
	zombie1++;
}

void zombies_on_street::display_zombie2(RenderWindow& window)
{
	static int zombie2 = 0;
	if (zombie2 == size_zombie2)
		zombie2 = 0;
	window.draw(S_Zombie2[zombie2]);
	zombie2++;
}

void zombies_on_street::display_zombie3(RenderWindow& window)
{
	if (r1 == 3 || r2 == 3)
	{
		static int zombie3 = 0;
		if (zombie3 == size_zombie1)
			zombie3 = 0;
		window.draw(S_Zombie3[zombie3]);
		zombie3++;
	}
	while (CurrentFrame <= 3)
	{
		time = float(clock.getElapsedTime().asMicroseconds());
		clock.restart();
		time = time / 800;
		CurrentFrame += float(0.065) * time;
	}
	CurrentFrame = 0;
}

zombies_on_street::zombies_on_street()
{
	initialization_Zombie_1();
	initialization_Zombie_2();
	initialization_Zombie_3();
}

void zombies_on_street::random_Zombies()
{
	r1 = rand() % 3 + 1;
	r2 = rand() % 3 + 1;
	while (r1 == r2)
		r2 = rand() % 3 + 1;
	cout << r1 << " " << r2 << endl;
}

void zombies_on_street::display(RenderWindow& window)
{
	if (r1 == 1 || r2 == 1)
		display_zombie1(window);
	if (r1 == 2 || r2 == 2)
		display_zombie2(window);
	display_zombie3(window);
}