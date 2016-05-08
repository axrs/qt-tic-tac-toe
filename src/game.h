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

    int moves() const;
    int movesRemaining() const;
    bool isOver() const;
    void addNaught(const int row, const int col);
    void addCross(const int row, const int col);
private:
    bool mFinished;
    std::vector<ITile *> mBoard;
    std::vector<ITile> mBoard2;

    void move(const int row, const int col, bool isCross);
};
}

#endif // GAME_H
