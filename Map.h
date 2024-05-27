#pragma once
#include <vector>
#include <string>
#include <SFML/Graphics.hpp>

class Map {
public:
    int HEIGHT_MAP = 25; // Height of the map
    int WIDTH_MAP = 40;  // Width of the map
    std::vector<std::string> Grid;

    Map();

    char getTile(int x, int y) const;
    void setTile(int x, int y, char tile);
};