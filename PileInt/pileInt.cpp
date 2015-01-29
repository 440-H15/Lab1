#include "PileInt.h"


bool PileInt::estVide()
{
	if (sommetPile == nullptr)
	{
		return true;
	}
	return false;
}

void PileInt::empiler(int i)
{
	NoeudInt * nouveauNoeud = new NoeudInt;
	nouveauNoeud->SetInt(i);
	nouveauNoeud->SetNext(sommetPile);
	sommetPile = nouveauNoeud;
}