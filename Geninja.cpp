#include <iostream>
#include "Geninja.h"
#include "Pokemon.h"
#include "Moves.h"
using namespace std;
Greninja::Greninja(string nickname) {
    Health = 8;
    Element = 2;
    Speed = 15;
    Name = nickname;
    M1->getMoveName() = "Quick Attack";
    M1->getType() = "Normal";
    M1->getMovePower() == 1;

    M2->getMoveName() = "Bubblebeam";
    M2->getType() = "Element";
    M2->getMovePower() == 2;

    M3->getMoveName() = "Hydro Pump";
    M3->getType() = "Unique";
    M3->getMovePower() == 3;

    M3->getMoveName() = "Guard";
    M3->getType() = "Defense";
    M3->getMovePower() == 0;
  }
