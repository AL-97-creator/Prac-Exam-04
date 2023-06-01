#include <iostream>
#include <string>
#include "Trap.h"
#include "Character.h"

using namespace std;

int main() {
    Trap B(3,3);
    Character A(3,3);
    B.apply(A);
    B.setType('T');
    cout << " " << A.getType() << " " << B.isActive()<<endl;
    return 0;
}