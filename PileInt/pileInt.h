#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"

class PileInt
{
  public:
	  PileInt();
	  ~PileInt();

	  void empiler(int);
	  void depiler();
	  bool estVide();
	  int consulter();
  private:
	  NoeudInt *premierNoeud;
};

#endif //PILE_H_