#include"Main_pvz.h"

int main()
{
    //Primitive Data Types
    bool Show_once_zombies = true;
    bool car_stop = true;

    RenderWindow window(VideoMode(200, 200), "Plants vs Zombies",Style::Fullscreen);
    window.setFramerateLimit(60);
    
    //User Defined Data Type (Classs)
    //Classes Map
    Floor floor(window);
    Car car;
    
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        
        if (Show_once_zombies)
        {
            floor.view_zombies(window);
            Show_once_zombies = false;
        }
        floor.green_floor(window);

        window.clear();

        floor.display(window);
        car.display(window);
        if(car_stop)
            car.move_car_to_start_game(car_stop);
        
        window.display();
    }

    return 0;
}