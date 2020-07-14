#include "Floor.h"

void Floor::initialization_Floor()
{
    T_floor.loadFromFile("../../assets/Day/Map/Background_0.jpg");
    R_floor.setTexture(&T_floor);
    R_floor.setSize(Vector2f(1400.f, 767.f));
}

void Floor::initialization_Floor_sad1row()
{
    T_floor_sad1row.loadFromFile("../../assets/Day/Map/PVZBackground_1.jpg");
    R_floor_sad1row.setTexture(&T_floor_sad1row);
    R_floor_sad1row.setSize(Vector2f(1400.f, 767.f));
}

void Floor::initialization_ChooseCards()
{
    T_ChooseCards.loadFromFile("../../assets/Day/Map/SeedBank_1.png");
    S_ChooseCards.setTexture(T_ChooseCards);
    S_ChooseCards.setPosition(Vector2f(230.f, 0.f));
}

Floor::Floor()
{
    z_on_s = new zombies_on_street;
	viewer_zombies = true;
	currentframe = 0;

    initialization_Floor();
    initialization_Floor_sad1row();
    initialization_ChooseCards();
}

void Floor::view_zombies(RenderWindow& window)
{
    bool wait = true;
    if (viewer_zombies)
    {
        while (floatrect.left <= 599)
        {
            window.clear();
            display(window);
            window.display();
            if (wait)
            {
                wait = false;
                sleep(seconds(1));
            }
            float time = float(clock.getElapsedTime().asMicroseconds());
            clock.restart();
            time = time / 800;
            currentframe += float(0.029) * time;
            if (currentframe >= 1)
            {
                currentframe -= 1;
                floatrect.left += 20;
                if (floatrect.left > 600)
                {
                    floatrect.left = 600;
                    viewer_zombies = false;
                }
                View view(FloatRect(floatrect.left, floatrect.top, floatrect.width, floatrect.height));
                window.setView(view);
            }
        }
    }
}

void Floor::set_view(RenderWindow& window)
{
    floatrect.left = 0.f;
    floatrect.top = 0.f;
    floatrect.width = 800.f;
    floatrect.height = 767.f;
    View view(FloatRect(floatrect.left, floatrect.top, floatrect.width, floatrect.height));
    window.setView(view);
}

void Floor::green_floor(RenderWindow& window)
{
    currentframe = 0;
    viewer_zombies = true;
    bool wait = true;
    if (viewer_zombies)
    {
        while (floatrect.left > 220)
        {
            window.clear();
            display(window);
            z_on_s->display(window);
            window.display();
            if (wait)
            {
                wait = false;
                sleep(seconds(1));
            }
            float time = float(clock.getElapsedTime().asMicroseconds());
            clock.restart();
            time = time / 800;
            currentframe += float(0.029) * time;
            if (currentframe >= 1)
            {
                currentframe -= 1;
                floatrect.left -= 20;
                if (floatrect.left < 220)
                {
                    floatrect.left = 220;
                    viewer_zombies = false;
                }
                View view(FloatRect(floatrect.left, floatrect.top, floatrect.width, floatrect.height));
                window.setView(view);
            }
        }
    }
}

void Floor::display(RenderWindow& window)
{
	window.draw(R_floor_sad1row);
}

void Floor::display_ChooseCards(RenderWindow& window)
{
    window.draw(S_ChooseCards);
}
