#include "PileInt.h"

PileInt::PileInt()
{
	premierNoeud = nullptr;
	dernierNoeud = nullptr;
}

bool PileInt::estVide()
{
	if (premierNoeud == nullptr)
		return true;
	return false;
}

void PileInt::empiler(int i)
{
	premierNoeud = new NoeudInt(i);
	dernierNoeud = premierNoeud;
}