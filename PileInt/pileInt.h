#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"

class PileInt
{
  public:
	  PileInt(void);
	  ~PileInt(void);
	  bool estVide(void);
	  void empiler(int _nombre);
	  int consulter(void);
	  void depiler(void);
  private:
	  NoeudInt* sommetPile;
};

#endif //PILE_H_