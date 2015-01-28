#include "PileInt.h"
#include <system_error>


bool PileInt::estVide()
{
	if (sommetPile == nullptr) // Si sommetPile n'est pas null
	{
		return true;
	}

	return false;	
}

void PileInt::empiler(int _nombre)
{
	if (estVide())
	{
		this->sommetPile = new NoeudInt(_nombre);
	} else
	{
		NoeudInt* vieuxSommet = this->sommetPile;
		this->sommetPile = new NoeudInt(_nombre);
		this->sommetPile->setPrecedent(vieuxSommet);
	}	
}

void PileInt::depiler()
{
	if (estVide())
	{
		throw std::runtime_error("La pile est vide!");
	}
	
	NoeudInt* vieuxSommet = this->sommetPile;
	this->sommetPile = this->sommetPile->getPrecedent();
	delete vieuxSommet;
}

int PileInt::consulter()
{
	if (estVide())
	{
		throw std::runtime_error("La pile est vide!");
	}

	return this->sommetPile->getContenu();
}