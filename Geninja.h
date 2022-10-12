#ifndef GENINJA_H
#define GENINJA_H
#include <ctime>
#include <iostream>
#include "Moves.h"
#include "Pokemon.h"
using namespace std;

class Greninja: public Pokemon  {
protected:
Moves *M1,*M2,*M3,*M4;
public:
  Greninja(string nickname);
  Moves*getM1(){return M1;};
  Moves*getM2(){return M2;};
  Moves*getM3(){return M3;};
  Moves*getM4(){return M4;};
  };
#endif
