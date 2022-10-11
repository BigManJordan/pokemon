#ifndef Swampert_h
#define Swampert_h
#include <ctime>
#include <iostream>
#include "Moves.h"
#include "Pokemon.h"
using namespace std;

class Swampert: public Pokemon  {
protected:
Moves *M1,*M2,*M3,*M4;
public:
  Swampert(string nickname);
  Moves*getM1(){return M1;};
  Moves*getM2(){return M2;};
  Moves*getM3(){return M3;};
  Moves*getM4(){return M4;};
  };

#endif
