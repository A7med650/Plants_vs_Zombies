#include "Zombies.h"

Zombies::Zombies()
{
	size_zombies = 22;
	T_zombies = new Texture[size_zombies];
	S_zombies = new Sprite[size_zombies];
	T_zombies[0].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_0.png");
	T_zombies[1].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_1.png");
	T_zombies[2].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_2.png");
	T_zombies[3].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_3.png");
	T_zombies[4].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_4.png");
	T_zombies[5].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_5.png");
	T_zombies[6].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_6.png");
	T_zombies[7].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_7.png");
	T_zombies[8].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_8.png");
	T_zombies[9].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_9.png");
	T_zombies[10].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_10.png");
	T_zombies[11].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_11.png");
	T_zombies[12].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_12.png");
	T_zombies[13].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_13.png");
	T_zombies[14].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_14.png");
	T_zombies[15].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_15.png");
	T_zombies[16].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_16.png");
	T_zombies[17].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_17.png");
	T_zombies[18].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_18.png");
	T_zombies[19].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_19.png");
	T_zombies[20].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_20.png");
	T_zombies[21].loadFromFile("../../assets/Day/Zombies/Zombie/Zombie_21.png");
	for (int i = 0; i < size_zombies; i++)
	{
		S_zombies[i].setTexture(T_zombies[i]);
		S_zombies[i].setPosition(Vector2f(900.f, 150.f));
	}
}

void Zombies::display(RenderWindow& window)
{
	static int i = 0;
	if (i == size_zombies)
		i = 0;
	window.draw(S_zombies[i]);
	i++;
}
