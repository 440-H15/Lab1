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
	if (estVide())
	{
		this->sommetPile = new NoeudInt(i);
	} else
	{
		NoeudInt* vieuxSommet = this->sommetPile;
		this->sommetPile = new NoeudInt(i);
		this->sommetPile->setPrecedent(vieuxSommet);
	}	
}

void PileInt::depiler()
{
	NoeudInt* vieuxSommet = this->sommetPile; //new NoeudInt(sommetPile->getContenu());
	// NoeudInt nouveauSommet = *this->sommetPile->getPrecedent();
	this->sommetPile = this->sommetPile->getPrecedent();
	delete vieuxSommet;
}

int PileInt::consulter()
{
	return this->sommetPile->getContenu();
}