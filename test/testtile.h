#ifndef TESTTILE_H
#define TESTTILE_H

#include "autotest.h"
#include <QDebug>

#include "tile.h"

using namespace TicTacToe;
class TestTile : public QObject
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
        // ToDo
        Tile t(true);
        EXPECT(t.isCross() == true);
        EXPECT(t.isNaught() == false);
    }

    void cleanupTestCase()
    {
    }
};

DECLARE_TEST(TestTile)

#endif // TESTTILE_H
