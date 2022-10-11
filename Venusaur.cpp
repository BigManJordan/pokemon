#include <iostream>
#include "Pokemon.h"
#include "Moves.h"
#include "Venusaur.h"
using namespace std;
Venusaur::Venusaur(string nickname) {
    Health = 17;
    Element = 3;
    Speed = 5;
    Name = nickname;
    M1->getMoveName() = "Tackle";
    M1->getType() = "Normal";
    M1->getMovePower() == 1;

    M2->getMoveName() = "Razor Leaf";
    M2->getType() = "Element";
    M2->getMovePower() == 2;

    M3->getMoveName() = "Leaf Storm";
    M3->getType() = "Unique";
    M3->getMovePower() == 3;

    M3->getMoveName() = "Guard";
    M3->getType() = "Defense";
    M3->getMovePower() == 0;
  }
