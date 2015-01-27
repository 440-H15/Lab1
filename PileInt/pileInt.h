#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"
#include <iostream>
using namespace std;

class PileInt
{
  public:
	  PileInt();
	  bool estVide();
  private:
	  NoeudInt *premierNoeud;
};

#endif //PILE_H_