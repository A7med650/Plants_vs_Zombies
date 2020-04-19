#include"Main_pvz.h"
#include "Day/Map/Floor.h"

int main()
{
    float CurrentFrame = 0;
    Clock clock;

    //Primitive Data Types
    bool car_stop = true;
    bool click_start = true;

    RenderWindow window(VideoMode(200, 200), "Plants vs Zombies",Style::Fullscreen);
    window.setFramerateLimit(60);
    window.setMouseCursorVisible(false);

    View fixed = window.getView();
    Texture T_Cursor;
    T_Cursor.loadFromFile("../../assets/Day/MainMenu/Cursor.png");
    RectangleShape R_Cursor;
    Sprite S_Cursor(T_Cursor);
    S_Cursor.setScale(Vector2f(2.5f, 2.5f));
    
    //User Defined Data Type (Classs)
    //Classes Map
    //Floor floor(window);
    //Car car;
    //zombies_on_street Z_on_S;
    Loading load;
    Menu MainMenu;
    
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
        S_Cursor.setPosition(static_cast<Vector2f>(Mouse::getPosition(window)));
        
        /*if (CurrentFrame<=80)
        {
            window.clear();
            floor.view_zombies(window);
            floor.display(window);
            Z_on_S.display_zombie1(window);
            Z_on_S.display_zombie2(window);
            Z_on_S.display_zombie3(window);
            window.display();
            CurrentFrame += float(0.005) * time;
            continue;
        }*/
       /* if(CurrentFrame>=30)
            floor.green_floor(window);*/

        window.clear();
        
        if (click_start)
        {
            load.display(window);
            load.display_Loading(window);
            click_start = load.button_click_start(window);
            window.setView(fixed);
            window.draw(S_Cursor);
            window.display();
            continue;
        }
        MainMenu.display_MainMenu(window,event);
       /* floor.display(window);
        car.display(window);
        floor.display_ChooseCards(window);
        if(car_stop)
            car.move_car_to_start_game(car_stop);*/
        
        window.setView(fixed);
        window.draw(S_Cursor);
        window.display();
    }

    return 0;
}