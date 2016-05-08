#ifndef TESTGAME_H
#define TESTGAME_H

#include "autotest.h"
#include <QDebug>

#include "game.h"

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

    void cleanupTestCase()
    {
    }
};

DECLARE_TEST(TestGame)
#endif // TESTGAME_H
