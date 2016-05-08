#include "game.h"
#include <emptytile.h>

using namespace TicTacToe;
Game::Game()
{
    EmptyTile *et = new EmptyTile();
    for (int i = 0; i < 9; i++) {
        mBoard.push_back(et);
    }
}

Game::~Game()
{
    std::vector<ITile *>::iterator it;

    for (it = mBoard.begin(); it != mBoard.end();) {
        it = mBoard.erase(it);
    }
}

int Game::moves()
{
    int totalMoves = 0;

    std::vector<ITile *>::iterator it;

    for (it = mBoard.begin(); it != mBoard.end(); it++) {
        if (!(*it)->isEmpty()) {
            totalMoves++;
        }
    }
    return totalMoves;
}

int Game::movesRemaining()
{
    return 9 - moves();
}

bool Game::isOver()
{
    return mFinished;
}
