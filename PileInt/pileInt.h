#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"
#include <iostream>

using namespace std;

class PileInt
{
  public:
	  void empiler(int _nombre);
	  int consulter();
	  void depiler();
	  bool estVide();
	  PileInt();
	  ~PileInt();
	     
  private:
	  NoeudInt* sommetPile;
};

#endif //PILE_H_