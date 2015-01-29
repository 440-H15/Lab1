#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"

class PileInt
{
  public:
	  PileInt();
	  bool estVide();
	  void empiler(int _nombre);
	  void depiler();
	  int consulter();
  private:
	  NoeudInt *premierNoeud;
};

#endif //PILE_H_