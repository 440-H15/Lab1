#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"

class PileInt
{
  public:
	  bool estVide();
	  void empiler(int i);
	  void depiler();
  private:
	  NoeudInt * sommetPile;
};

#endif //PILE_H_