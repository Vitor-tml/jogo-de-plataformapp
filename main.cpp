#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow janela(sf::VideoMode(500, 600), "Primeira Janela");

    while(janela.isOpen())
    {
        sf::Event evento;

        while(janela.pollEvent(evento))
        {
            if(evento.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                janela.close();
        }
    }
    return EXIT_SUCCESS;
}