#ifndef CHAR_H
#define CHAR_H

#include "Cell.h"

class Character : public Cell{
public:
    Character() : Cell(0, 0, 'C') {}
    Character(int x, int y) : Cell(x, y, 'C') {}
    void move(int dx, int dy) {
        setPos(std::get<0>(getPos()) + dx, std::get<1>(getPos()) + dy);
    }
};

#endif