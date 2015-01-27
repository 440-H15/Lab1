#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"

class PileInt
{
public:
	PileInt(void);
	bool estVide();
	void empiler(int i);
private:
	NoeudInt* premierNoeud;
	NoeudInt* dernierNoeud;
};

#endif //PILE_H_