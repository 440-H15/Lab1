#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"

using namespace std;

class PileInt
{
  public:
	  PileInt();
	  ~PileInt();
	  bool estVide();
	  void empiler(int _nombre);
	  void depiler();
	  int consulter();
  private:
	  NoeudInt* sommetPile = nullptr;
};

#endif //PILE_H_