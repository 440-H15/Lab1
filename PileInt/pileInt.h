#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"

class PileInt
{
  public:
	  PileInt();
	  ~PileInt();
	  void empiler(int nombre);
	  void depiler();
	  int consulter();
	  bool estVide();

  private:
	  NoeudInt* sommetPile;
};

#endif //PILE_H_