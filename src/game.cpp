#include "game.h"

using namespace TicTacToe;
Game::Game()
{
}

int Game::movesRemaining()
{
    return 9;
}

bool Game::isOver()
{
    return mFinished;
}
