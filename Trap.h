#ifndef TRAP_H
#define TRAP_H

#include "Effect.h"

class Trap : public Cell{
public:
    Trap() : Cell(0, 0, 'T') {}
    Trap(int x, int y) : Cell(x, y, 'T') {}
    bool isActive() {
        if(Trap::getType()=='T'){
            return true;
        }else{
            return false;
        }
    }
    void apply(Cell &cell){
        Cell::setType('C');
        Trap::setType('T')
        Trap::isActive();
    }
};

#endif