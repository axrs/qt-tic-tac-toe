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
        Tile t(true);
        EXPECT(t.isCross() == true);
        EXPECT(t.isNaught() == false);
    }

    void testConstructorForNaught()
    {
        Tile t(false);
        EXPECT(t.isCross() == false);
        EXPECT(t.isNaught() == true);
    }

    void testToString()
    {
        Tile t(true);
        EXPECT(t.toString().compare("Tile{isCross=true}"));
    }

    void testToStringNaught()
    {
        Tile t(false);
        EXPECT(t.toString().compare("Tile{isCross=false}"));
    }

    void cleanupTestCase()
    {
    }
};

DECLARE_TEST(TestTile)

#endif // TESTTILE_H
