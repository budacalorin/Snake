#include <iostream>
#include "SARPE.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


using namespace std;

int main()
{
    sf::Image dragnea;
    //dragnea.loadFromFile("liviu.png");
    sf::Texture imgDreptunghi;
    imgDreptunghi.loadFromImage(dragnea);
    imgDreptunghi.loadFromImage(dragnea);
    sf::Sprite spriteDreptunghi;

    spriteDreptunghi.setTexture(imgDreptunghi);
    spriteDreptunghi.setScale(0.1,0.1);
    int hight=600;
    int width=800;
    int xDreptunghi,yDreptunghi;
    xDreptunghi=10;
    yDreptunghi=10;
    sf::RectangleShape Drepunghi;
    Drepunghi.setFillColor(sf::Color::Black);
    Drepunghi.setPosition(xDreptunghi,yDreptunghi);
    Drepunghi.setSize(sf::Vector2f(100, 50));
    Drepunghi.setOutlineColor(sf::Color::Green);
    Drepunghi.setOutlineThickness(2);

    sf::RenderWindow window(sf::VideoMode(width,hight),"Snake.exe");
    while (window.isOpen())
    {

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            if (xDreptunghi+102<width)
            xDreptunghi+=1;
            Drepunghi.setPosition(xDreptunghi,yDreptunghi);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            if (xDreptunghi>2)
            xDreptunghi-=1;
            Drepunghi.setPosition(xDreptunghi,yDreptunghi);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            if (yDreptunghi>2)
            yDreptunghi-=1;
            Drepunghi.setPosition(xDreptunghi,yDreptunghi);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            if (yDreptunghi+52<hight)
            yDreptunghi+=1;
            Drepunghi.setPosition(xDreptunghi,yDreptunghi);
        }


        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();

        window.draw(Drepunghi);

        window.display();
    }

    return 0;
}
