#include <iostream>
#include <string>
#include "Trap.h"
#include "Character.h"

using namespace std;

int main() {
    Character A;
    Trap B(3,3);
    A.move(3,3);
    B.apply(A);
    cout << A.getType() << " " << B.getType()<<endl;
    return 0;
}