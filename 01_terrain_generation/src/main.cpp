#include "SFML/Graphics.hpp"
#include <iostream>
#include "PerlinNoise.hpp"

sf::Color interpolateColor(double value)
{
    if (value < 0.3)
    {
        int blue = static_cast<int>(value / 0.3 * 200 + 55);
        return sf::Color(0, 0, blue);
    }
    else if (value < 0.5)
    {
        int green = static_cast<int>((value - 0.3) / 0.2 * 155 + 100);
        return sf::Color(238, green, 0);
    }
    else if (value < 0.7)
    {
        int green = static_cast<int>((value - 0.5) / 0.2 * 155 + 100);
        return sf::Color(34, green, 34);
    }
    else
    {
        int intensity = static_cast<int>((value - 0.7) / 0.3 * 255);
        return sf::Color(intensity, intensity, intensity);
    }
}

int main()
{
    const siv::PerlinNoise::seed_type seed = 123456u;
    const siv::PerlinNoise perlin{ seed };

    const int windowWidth = 800;
    const int windowHeight = 600;
    const int tileSize = 10;
    const double frequency = 0.05;

    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Perlin Noise Terrain");

    double offsetX = 0.0;
    double offsetY = 0.0;
    const double scrollSpeed = 0.5;

    const int tilesX = windowWidth / tileSize;
    const int tilesY = windowHeight / tileSize;

    sf::VertexArray terrain(sf::Quads, tilesX * tilesY * 4);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            offsetX -= scrollSpeed;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            offsetX += scrollSpeed;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            offsetY -= scrollSpeed;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            offsetY += scrollSpeed;

        window.clear();

        int index = 0;

        for (int y = 0; y < tilesY; ++y)
        {
            for (int x = 0; x < tilesX; ++x)
            {
                const double noise = perlin.octave2D_01((x + offsetX) * frequency, (y + offsetY) * frequency, 4);
                sf::Color color = interpolateColor(noise);

                sf::Vertex* quad = &terrain[index * 4];

                quad[0].position = sf::Vector2f(x * tileSize, y * tileSize);
                quad[1].position = sf::Vector2f((x + 1) * tileSize, y * tileSize);
                quad[2].position = sf::Vector2f((x + 1) * tileSize, (y + 1) * tileSize);
                quad[3].position = sf::Vector2f(x * tileSize, (y + 1) * tileSize);

                quad[0].color = color;
                quad[1].color = color;
                quad[2].color = color;
                quad[3].color = color;

                index++;
            }
        }

        window.draw(terrain);

        window.display();
    }

    return 0;
}
