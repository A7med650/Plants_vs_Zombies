#include "Car.h"

void Car::initialization_Car()
{
	T_car.loadFromFile("../../assets/Day/Map/car.png");
	for (int i = 0; i < 5; i++)
		S_car[i].setTexture(T_car);
	S_car[0].setPosition(Vector2f(150.f, 163.f));
	S_car[1].setPosition(Vector2f(150.f, 288.f));
	S_car[2].setPosition(Vector2f(150.f, 417.f));
	S_car[3].setPosition(Vector2f(150.f, 544.f));
	S_car[4].setPosition(Vector2f(150.f, 673.f));
}

void Car::display_Car(RenderWindow& window)
{
	for (int i = 0; i < 5; i++)
		window.draw(S_car[i]);
}

Car::Car()
{
	initialization_Car();
}

void Car::move_car_to_start_game(bool& car_stop)
{
	if (S_car[0].getPosition().x != 190)
	{
		for (int i = 0; i < 5; i++)
			S_car[i].move(Vector2f(5.f, 0.f));
	}
	else
		car_stop = false;
}

void Car::display(RenderWindow& window)
{
	display_Car(window);
}
