#pragma once

#include <SFML/Graphics.hpp>
#include "Character.h"
#include "Map.h"
#include "Graph.h"

class Game {
private:
    sf::RenderWindow window;
    Map map;
    Character character;
    Graph graph;
    sf::Text scoreText;
    sf::Font font;

    void drawGrid();
    void drawPath();
    void drawPlayer();
    void drawTreasure();
    void drawKey();
    void drawScore();
    void handleEvents();
    void update(float dtSeconds);
    void render();

public:
    Game();
    void run();
};
