#include <iostream>
#include <string>
#include "Cell.h"
#include "Effect.h"
#include "Utils.h"

using namespace std;

int main() {
    Cell A(5,5, 'A');
    Cell B;
    Utils C;
    Utils D;
    cout << C.calculateDistance(C.generateRandomPos(8,8), D.generateRandomPos(5,5))<< endl;
    return 0;
}