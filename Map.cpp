#include "Map.h"

Map::Map() {
    Grid = {
        "0000000000000000000000000000000000000000",
        "0              t                       0",
        "0 000  c                     0         0",
        "0 000  c             k       0 0       0",
        "0 000  c   0   00                      0",
        "0 000          0                       0",
        "0 000          0                       0",
        "0 00          0                        0",
        "0                                      0",
        "0        0                             0",
        "0                     0                0",
        "0                                      0",
        "0         000                          0",
        "0                                      0",
        "0                                      0",
        "0               0                      0",
        "0                                      0",
        "0         0    00                      0",
        "0                 0                    0",
        "0           0000000                    0",
        "0           0                          0",
        "0           0                          0",
        "0           0                          0",
        "0                                      0",
        "0000000000000000000000000000000000000000",
    };
}

char Map::getTile(int x, int y) const {
    return Grid[y][x];
}

void Map::setTile(int x, int y, char tile) {
    Grid[y][x] = tile;
}
