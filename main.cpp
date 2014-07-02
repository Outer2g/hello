#include <iostream>
#include <vector>
#include <math.h>
#include <string>

#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

using namespace std;
//Variables
enum dir{left,right,up,none};
dir initialDir=right;
const int mx[4]=(-1, 1, 0,0);
const int my[4]=(0,0,1,0);
//SFML Objects
sf::Sprite player;
sf::Texture playerText;
    //Vects
sf::Vector2f playerSpeed(0.0,0.0);
int playerMovement=left;
sf::Vector2f spriteSize;
sf::Vector2f spriteSource1(0,left);
//Window
sf::RenderWindow window(sf::VideoMode::getDesktopMode(),"SFMLGAME",sf::Style::Default);
//Load things
if (!playerText.loadFromFile("sfml/spritesheet.png")) cerr << "Not able to load paddle1 texture"<<endl;
spriteSize.x = playerText.getSize().x/10;
spriteSize.y =playerText.getSize().y/10;
paddleHeigh = window.getSize().y/5;
paddleWidth = paddleHeigh/1.5;
int main()
{
    while (window.isOpen()){
        //Events
        while (window.pollEvent(event)){
        switch (event.type) {
        case sf::Event::Closed:
        window.close();
        break;
        case sf::Event::KeyPressed:
            if (event.key.code=sf::Keyboard::Escape) window.close();
        default:
            break;
        }
    }

    return 0;
}
}

