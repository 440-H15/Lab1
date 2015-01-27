#include "PileInt.h"

PileInt::PileInt()
{
	premierNoeud = NULL;
}

bool PileInt::estVide()
{
	if (premierNoeud == NULL){
		return true;
	}
	return false;
}
