#include "game.h"
#include "emptytile.h"
#include "tile.h"

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

void Game::addNaught(const int row, const int col)
{
    move(row, col, false);
}

void Game::addCross(const int row, const int col)
{
    move(row, col, true);
}

void Game::move(const int row, const int col, bool isCross)
{
    int position = row * 3 + col;
    ITile *t = mBoard.at(position);

    if (t->isEmpty()) {
        mBoard.at(position) = new Tile(isCross);
    }
}

int Game::moves() const
{
    int totalMoves = 0;

    ITile *t;

    for (int i = 0; i < 9; i++) {
        t = mBoard.at(i);
        if (!t->isEmpty()) {
            totalMoves++;
        }
    }
    return totalMoves;
}

int Game::movesRemaining() const
{
    return 9 - moves();
}

bool Game::isOver() const
{
    return mFinished;
}
