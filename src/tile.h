#ifndef TILE_H
#define TILE_H
#include <string>

namespace TicTacToe {
class Tile
{
public:
    /**
     * @brief Tile
     * @param isCross True if the tile represents a cross
     */
    Tile(bool isCross);

    bool isCross();
    bool isNaught();

    std::string toString();


private:
    bool mIsCross = false;
};
}

#endif // TILE_H
