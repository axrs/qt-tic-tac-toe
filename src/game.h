#ifndef GAME_H
#define GAME_H

#include "itile.h"
#include <vector>
#include <array>

namespace TicTacToe {
class Game
{
public:
    Game();
    ~Game();

    int moves();
    int movesRemaining();
    bool isOver();

private:
    bool mFinished;
    std::vector<ITile *> mBoard;
};
}

#endif // GAME_H
