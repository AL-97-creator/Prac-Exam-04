#ifndef GAME_H
#define GAME_H

#include "Effect.h"
#include "Trap.h"
#include "Cell.h"
#include "Character.h"
#include "Utils.h"
#include <vector>

using namespace std;

class Game {
    private:
    public:
    initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight){
        for int(i=0;i<numCharacters;i++){
            randomPosition=Utils.generateRandomPos;
            Character(randomPosition);
        }
        for int(i=0;i<numTraps;i++){
            randomPosition=Utils.generateRandomPos;
            Trap(randomPosition);
        }

    }

#endif