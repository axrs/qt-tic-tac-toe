#ifndef ITILE_H
#define ITILE_H
#include <string>

namespace TicTacToe {
class ITile
{
public:
    ITile()
    {
    }

    ~ITile()
    {
    }

    virtual bool isCross() const = 0;
    virtual bool isNaught() const = 0;
    virtual bool isEmpty() const = 0;
    virtual std::string toString() const = 0;
};
}

#endif // ITILE_H
