#ifndef TILE_H
#define TILE_H
#include <string>

#include "itile.h"
namespace TicTacToe {
class Tile : ITile
{
public:
    /**
     * @brief Tile
     * @param isCross True if the tile represents a cross
     */
    Tile(bool isCross);
    ~Tile()
    {
    }

    bool isCross() const;
    bool isNaught() const;
    bool isEmpty() const;
    std::string toString() const;

private:
    bool mIsCross = false;
};
}

#endif // TILE_H
