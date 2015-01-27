#include "PileInt.h"


bool PileInt::estVide()
{
	if (sommetPile == nullptr) // Si sommetPile n'est pas null
	{
		return true;
	}

	return false;	
}

void PileInt::empiler(int i)
{
	this->sommetPile = new NoeudInt(i);
}

void PileInt::depiler()
{
	NoeudInt tempNoeud = *this->sommetPile;
	this->sommetPile = sommetPile->getPrecedent();
}