#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"

class PileInt
{
  public:
	  NoeudInt * sommetPile;

  private:
	  void empiler(int _nombre);
	  int consulter();
	  void depiler();
	  bool estVide();


	
};

#endif //PILE_H_