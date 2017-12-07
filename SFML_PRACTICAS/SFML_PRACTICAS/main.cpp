//
//  main.cpp
//  SFML_PRACTICAS
//
//  Created by Alex Paredes on 21/10/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#include <SFML/Graphics.hpp>

int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(1000, 800), "My window");
    window.setFramerateLimit(60);
    
    sf::Clock clock;
    sf::Time time;
    
    sf::Texture textura;
    textura.loadFromFile("1.png");
    sf::Sprite sprite(textura);
    sf::Sprite sprite2(textura);
    
    sf::IntRect recorte01(0,0,83, 64);
    sf::IntRect recorte02(83, 0, 83, 64);
    sprite.setTextureRect(recorte01);
    sprite2.setTextureRect(recorte02);
    
    int mod = 0;
    
    //sprite2.setPosition(100, 100);
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
       
         window.clear(sf::Color::White);
        time = clock.getElapsedTime();
        if(time.asSeconds() > 0.5f){
            
            if(mod % 2 == 0)
                window.draw(sprite);
            else
                window.draw(sprite2);
            mod++;
            clock.restart();
         window.display();
        }
        
        // end the current frame
       
    }
    
    return 0;
}
