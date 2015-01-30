#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"

class PileInt
{
  public:
	  PileInt();
	  void empiler(int _nombre); // push()
	  int consulter(); // peek()
	  void depiler(); //pop()
	  bool estVide(); //isEmpty()
  private:
	  NoeudInt* sommetPile;
};

#endif //PILE_H_