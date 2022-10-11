#include <iostream>
#include "Sceptile.h"
#include "Pokemon.h"
#include "Moves.h"
using namespace std;
Sceptile::Sceptile(string nickname) {
    Health = 8;
    Element = 3;
    Speed = 16;
    Name = nickname;
    M1->getMoveName() = "Swift";
    M1->getType() = "Normal";
    M1->getMovePower() == 1;

    M2->getMoveName() = "Leaf Blade";
    M2->getType() = "Element";
    M2->getMovePower() == 2;

    M3->getMoveName() = "Solar Beam";
    M3->getType() = "Unique";
    M3->getMovePower() == 3;

    M3->getMoveName() = "Guard";
    M3->getType() = "Defense";
    M3->getMovePower() == 0;
  }

 
