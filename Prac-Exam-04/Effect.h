#ifndef EFF_H
#define EFF_H

#include "Cell.h"

class Effect {
public:
    virtual void apply(Cell &cell) = 0;
};

#endif