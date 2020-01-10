#include <string> 


#include <SFML/Graphics.hpp>
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <math.h>
#include <vector>

int main()
{
    // create the window
    int width = 600;
    int height = 800;

    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;

   // sf::RenderWindow window(sf::VideoMode(800, 600), "SFML shapes", sf::Style::Default, settings);

    sf::RenderWindow window(sf::VideoMode(width, height), "My window", sf::Style::Default, settings);

    sf::CircleShape triangle1(80.f, 3);
    sf::CircleShape triangle2(120.f, 3);
    sf::CircleShape triangle3(160.f, 3);
    sf::RectangleShape rectangle1(sf::Vector2f(80.f, 50.f));
    sf::CircleShape circle(15);
    sf::RectangleShape prezent(sf::Vector2f(90, 60));
    sf::RectangleShape pasek1(sf::Vector2f(90, 10));
    sf::RectangleShape pasek2(sf::Vector2f(10, 60));
    sf::RectangleShape prezent2(sf::Vector2f(90, 60));
    sf::RectangleShape pasek12(sf::Vector2f(90, 10));
    sf::RectangleShape pasek22(sf::Vector2f(10, 60));
    sf::CircleShape gwiazdka1(30.f, 3);
    sf::CircleShape gwiazdka2(30.f, 3);
    //sf::CircleShape light1(10);
    sf::CircleShape lancuch(5);

    // set the shape color to green
    triangle1.setFillColor(sf::Color(29, 184, 24));
    triangle2.setFillColor(sf::Color(29, 184, 24));
    triangle3.setFillColor(sf::Color(29, 184, 24));
    rectangle1.setFillColor(sf::Color(102, 51, 0, 255));
    prezent.setFillColor(sf::Color(250, 0, 0));
    pasek1.setFillColor(sf::Color(255, 247, 0));
    pasek2.setFillColor(sf::Color(255, 247, 0));
    prezent2.setFillColor(sf::Color(255, 149, 0));
    pasek12.setFillColor(sf::Color(0, 153, 255));
    pasek22.setFillColor(sf::Color(0, 153, 255));
    gwiazdka1.setFillColor(sf::Color(255, 255, 0));
    gwiazdka2.setFillColor(sf::Color(255, 255, 0));
    //light1.setFillColor(sf::Color(255, 255, 0, 200));
    lancuch.setFillColor(sf::Color(255, 242, 130));
   
 // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...

       //Christmas tree
       triangle1.setPosition(230, 100);
       window.draw(triangle1);

       triangle2.setPosition(190, 180);; 
       window.draw(triangle2);

       triangle3.setPosition(150, 270);
       window.draw(triangle3);
               
       //trunk
       rectangle1.setPosition(270, 510);
       window.draw(rectangle1);
               
       //red gift
       prezent.setPosition(325, 515);
       window.draw(prezent);

       pasek1.setPosition(325, 540);
       window.draw(pasek1);

       pasek2.setPosition(365, 515);
       window.draw(pasek2);

       //yellow gift
       prezent2.setPosition(200, 520);
       window.draw(prezent2);

       pasek12.setPosition(200, 545);
       window.draw(pasek12);

       pasek22.setPosition(240, 520);
       window.draw(pasek22);

       //star
      
       gwiazdka1.setPosition(280, 40);
       window.draw(gwiazdka1);

       gwiazdka2.setPosition(340,98);
       gwiazdka2.setRotation(180.f);
       window.draw(gwiazdka2);


       
       //baubles
       circle.setPosition(250, 300);
       circle.setFillColor(sf::Color(51, 102, 255));
       window.draw(circle);

       circle.setPosition(320, 330);
       circle.setFillColor(sf::Color(255, 0, 102));
       window.draw(circle);
       
       circle.setPosition(300, 400);
       circle.setFillColor(sf::Color(255, 255, 0));
       window.draw(circle); 
      
       circle.setPosition(240, 460);
       circle.setFillColor(sf::Color(204, 0, 0));
       window.draw(circle); 
       
       circle.setPosition(300, 250);
       circle.setFillColor(sf::Color(153, 51, 153));
       window.draw(circle);
       
       circle.setPosition(300, 150);
       circle.setFillColor(sf::Color(0, 51, 102));
       window.draw(circle);

       // lancuch
        
       for (int i = 0; i < 50; i += 5)
       {
           lancuch.setPosition(270+2*i, 165+i);
           window.draw(lancuch);
       }
       
       for (int i = 0; i < 77; i += 5)
       {
           lancuch.setPosition(250 + 2 * i, 275 + i);
           window.draw(lancuch);
       }

       for (int i = 0; i < 102; i += 5)
       {
           lancuch.setPosition(230 + 2 * i, 400 + i);
           window.draw(lancuch);
       }

       
       // end the current frame
        window.display();
    }

    return 0;
}
