#ifndef EMPTYTILE_H
#define EMPTYTILE_H

#include "itile.h"
namespace TicTacToe {
class EmptyTile : ITile
{
public:
    /**
     * @brief Tile
     * @param isCross True if the tile represents a cross
     */
    EmptyTile();
    ~EmptyTile()
    {
    }

    bool isCross() const;
    bool isNaught() const;
    bool isEmpty() const;
    std::string toString() const;
};
}

#endif // EMPTYTILE_H
