#include "PileInt.h"

PileInt::PileInt()
{
	premierNoeud = nullptr;
}

bool PileInt::estVide()
{
	if (premierNoeud == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void PileInt::empiler(int _nombre)
{
	premierNoeud = new NoeudInt(_nombre, premierNoeud);
}