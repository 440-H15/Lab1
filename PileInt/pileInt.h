#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"

class PileInt
{
  public:
	  PileInt();
	  bool estVide();
	  void empiler(int _nombre);
	  int consulter();
	  void depiler();
  private:
	  NoeudInt* sommetPile;
};

#endif //PILE_H_