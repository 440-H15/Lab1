#ifndef PILE_H_
#define PILE_H_
#include <iostream>

#include "noeudInt.h"

class PileInt
{
  public:

	  PileInt();

	  bool estVide();
	  void empiler(int valeur);
	  void depiler();
	  int consulter();
	     
  private:
	  int nbValues;
	  NoeudInt* lastValues;
};

#endif //PILE_H_