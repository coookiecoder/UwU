#include <SFML/Audio.hpp>
#include <SFML/Config.hpp>
#include <SFML/GpuPreference.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Main.hpp>
#include <SFML/Network.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#include <fstream>

#include "DataEntry.hpp"

int main(void)
{
	std::ifstream file("../../data/recipe.lua");

    auto window = sf::RenderWindow(sf::VideoMode(1840u, 1000u), "CMake SFML Project");
    window.setFramerateLimit(75);

    while (window.isOpen()) {
        for (auto event = sf::Event(); window.pollEvent(event);) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear();
        window.display();
    }
}
