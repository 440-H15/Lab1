#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"

class PileInt
{
  public:
	  bool estVide();
	  void empiler(int _nombre);
	  void depiler();
  private:
	  NoeudInt* sommetPile = nullptr;
};

#endif //PILE_H_