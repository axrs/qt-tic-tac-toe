#ifndef TESTGAME_H
#define TESTGAME_H

#include "autotest.h"
#include <QDebug>

#include "game.h"
#include "tile.h"

using namespace TicTacToe;
class TestGame : public QObject
{
    Q_OBJECT
public:

private:

private slots:
    void initTestCase()
    {
    }

    void testConstructor()
    {
        Game game;

        EXPECT(game.moves() == 0);
        EXPECT(game.movesRemaining() == 9);
        EXPECT(game.isOver() == false);
    }

    void testAddTile()
    {
        Game game;

        game.addCross(0, 0);
        EXPECT(game.moves() == 1);
        EXPECT(game.movesRemaining() == 8);

        game.addNaught(0, 1);
        EXPECT(game.moves() == 2);
        EXPECT(game.movesRemaining() == 7);
    }

    void cleanupTestCase()
    {
    }
};

DECLARE_TEST(TestGame)
#endif // TESTGAME_H
