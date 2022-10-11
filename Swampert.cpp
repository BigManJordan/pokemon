#include <iostream>
#include "Swampert.h"
#include "Pokemon.h"
#include "Moves.h"
using namespace std;
Swampert::Swampert(string nickname) {
    Health = 15;
    Element = 2;
    Speed = 7;
    Name = nickname;
    M1->getMoveName() = "Pound";
    M1->getType() = "Normal";
    M1->getMovePower() == 1;

    M2->getMoveName() = "Water gun";
    M2->getType() = "Element";
    M2->getMovePower() == 2;

    M3->getMoveName() = "Surf";
    M3->getType() = "Unique";
    M3->getMovePower() == 3;

    M3->getMoveName() = "Guard";
    M3->getType() = "Defense";
    M3->getMovePower() == 0;
  }

 
