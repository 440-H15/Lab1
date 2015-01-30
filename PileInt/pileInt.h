#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"

class PileInt
{
  public:
	  PileInt();
	  bool estVide();
	  int consulter();
	  void empiler(int _nombre);
	  void depiler();
  private:
	  NoeudInt* sommetPile;
};

#endif //PILE_H_