#include "tile.h"

using namespace TicTacToe;
Tile::Tile(bool isCross) : ITile()
{
    mIsCross = isCross;
}

bool Tile::isCross() const
{
    return mIsCross;
}

bool Tile::isNaught() const
{
    return !mIsCross;
}

std::__1::string Tile::toString() const
{
    return "Tile{isCross=" + std::to_string(isCross())
           +", isNaught=" + std::to_string(isNaught())+"}";
}
