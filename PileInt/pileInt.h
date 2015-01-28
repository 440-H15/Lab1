#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"

class PileInt
{
  public:
	     bool estVide();
		 void depiler();
		 int consulter();
		 void empiler(int _nombre);
  private:
	  NoeudInt* sommetPile;
};

#endif //PILE_H_