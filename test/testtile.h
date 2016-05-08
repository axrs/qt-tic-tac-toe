#ifndef TESTTILE_H
#define TESTTILE_H

#include "autotest.h"
#include <QDebug>

#include "tile.h"

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
    }

    void cleanupTestCase()
    {
    }
};

DECLARE_TEST(TestTile)

#endif // TESTTILE_H
