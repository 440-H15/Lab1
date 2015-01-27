#ifndef PILE_H_ //si variable n'est pas définie, définit la. c'est comme pragma_once (cette forme fonctionne avec tous les compilateurs)
#define PILE_H_      

#include "noeudInt.h"

class PileInt
{
  public:
	  PileInt();
	  bool estVide();
	  void empiler(int _nombre);
  private:
	  NoeudInt* sommetPile;
	  
};

#endif //PILE_H_