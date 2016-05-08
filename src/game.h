#ifndef GAME_H
#define GAME_H

#include "tile.h"
#include <array>

namespace TicTacToe {
class Game
{
public:
    Game();

    int movesRemaining();
    bool isOver();

private:
    bool mFinished;
};
}

#endif // GAME_H
