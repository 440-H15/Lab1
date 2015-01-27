#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"

class PileInt
{
  public:
	     
	  void empiler(int _nombre);
	  int consulter();
	  void depiler();
	  bool estVide();
  private:
        
	  NoeudInt* sommetPile;
};

#endif //PILE_H_