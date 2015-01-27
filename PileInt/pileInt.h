#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"

class PileInt
{
  public:
	  PileInt();
	  ~PileInt();
	  bool estVide();
	  void empiler(int _nombre);
	     
  private:
	  NoeudInt *sommetPile;
        
};

#endif //PILE_H_