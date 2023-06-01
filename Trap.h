#ifndef TRAP_H
#define TRAP_H

#include "Effect.h"
#include "Cell.h"
#include "Character.h"

class Trap : public Cell, Effect{
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
        cell.setType('T');
        Trap::setType('0');
    }
};

#endif