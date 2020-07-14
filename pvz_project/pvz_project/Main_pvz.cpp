#include"Main_pvz.h"
//#include "Day/Map/Floor.h"


int main()
{
    Clock clock;

    //CurrentFrame
    float CurrentFrame_Z_on_S = 0;
    float CurrentFrame_Hand = 0;
    
    //Primitive Data Types
    //bool
    bool is_car_stop = true;
    bool is_click_start = true;
    bool is_pressedStart = true;
    bool is_setView = true;
    bool is_click_loading = false;
    //int
    int max_hand = 0;

    RenderWindow window(VideoMode(200, 200), "Plants vs Zombies",Style::Fullscreen);
    window.setFramerateLimit(60);
    window.setKeyRepeatEnabled(false);

    srand((unsigned int)time(NULL));
    short r1 = rand() % 3 + 1;
    short r2 = rand() % 3 + 1;

    //User Defined Data Type (Classes)
    //Classes Map
    Loading load;
    Menu MainMenu;
    Floor floor;
    zombies_on_street Z_on_S;
    Car car;
    
    Z_on_S.random_Zombies();

    while (window.isOpen())
    {
        float time = float(clock.getElapsedTime().asMicroseconds());
        clock.restart();
        time = time / 800;

        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        
        window.clear();

        if (!is_pressedStart && CurrentFrame_Z_on_S <= 80 && max_hand >= 6)
        {
            if (is_setView)
            {
                is_setView = false;
                floor.set_view(window);
            }

            if (CurrentFrame_Z_on_S <= 80)
            {
                window.clear();
                floor.view_zombies(window);
                floor.display(window);
                Z_on_S.display(window);
                window.display();
                CurrentFrame_Z_on_S += float(0.005) * time;
                continue;
            }
        }

        
        if (is_pressedStart)
        {
            if (is_click_start)
            {
                load.display(window);
                load.display_Loading(window, is_click_loading);
                if(is_click_loading)
                    is_click_start = load.button_click_start(window);
                window.display();
                continue;
            }
            MainMenu.display_MainMenu(window, event, is_pressedStart);
        }

        if (!is_pressedStart && max_hand < 6)
        {
            if (CurrentFrame_Hand <= 25)
            {
                MainMenu.display_MainMenu(window, event, is_pressedStart);
                MainMenu.display_Hand(window, max_hand);
                CurrentFrame_Hand += float(0.02) * time;
            }
            if (CurrentFrame_Hand > 25 && max_hand < 6)
            {
                CurrentFrame_Hand = 0;
                max_hand++;
            }
            if (max_hand >= 6)
                sleep(seconds(4.f));
        }
        
        if (!is_pressedStart && max_hand >= 6)
        {
            floor.green_floor(window);
            floor.display(window);
            car.display(window);
            floor.display_ChooseCards(window);
            if (is_car_stop)
                car.move_car_to_start_game(is_car_stop);
        }

        window.display();
    }

    return 0;
}