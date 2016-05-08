#include "tile.h"

using namespace TicTacToe;
Tile::Tile(bool isCross)
{
    mIsCross = isCross;
}

bool Tile::isCross()
{
    return mIsCross;
}

bool Tile::isNaught()
{
    return !mIsCross;
}