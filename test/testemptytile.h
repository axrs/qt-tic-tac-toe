#ifndef TESTEMPTYTILE_H
#define TESTEMPTYTILE_H

#include "autotest.h"
#include <QDebug>
#include <QString>

#include "emptytile.h"

using namespace TicTacToe;
class TestEmptyTile : public QObject
{
    Q_OBJECT
public:

private:

private slots:

    void testConstructor()
    {
        EmptyTile t;
        EXPECT(t.isCross() == false);
        EXPECT(t.isNaught() == false);
        EXPECT(t.isEmpty() == true);
    }

    void testToString()
    {
        EmptyTile t;
        EXPECT(t.toString().compare("EmptyTile{isCross=0, isNaught=0}") == 0);
    }
};

DECLARE_TEST(TestEmptyTile)

#endif // TESTEMPTYTILE_H
