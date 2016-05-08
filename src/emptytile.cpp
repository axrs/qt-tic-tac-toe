#include "emptytile.h"

using namespace TicTacToe;

EmptyTile::EmptyTile() : ITile()
{
}

bool EmptyTile::isCross() const
{
    return false;
}

bool EmptyTile::isNaught() const
{
    return false;
}

bool EmptyTile::isEmpty() const
{
    return true;
}

std::__1::string EmptyTile::toString() const
{
    return "EmptyTile{isCross=0, isNaught=0}";
}
