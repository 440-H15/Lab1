#include "PileInt.h"
#include <stdexcept>

PileInt::PileInt()
{
	sommetPile = nullptr;
}

PileInt::~PileInt()
{
	while (!estVide())
	{
		depiler();
	}
}

bool PileInt::estVide()
{
	return sommetPile == nullptr;
}

void PileInt::empiler(int _nombre)
{
	NoeudInt* nouveauNoeud = new NoeudInt;			
	nouveauNoeud->setContenu(_nombre);
	nouveauNoeud->setPrecedent(sommetPile);
	sommetPile = nouveauNoeud;
}

void PileInt::depiler()
{	
	if (estVide())
	{
		throw runtime_error("Action impossible: pile vide!");
	}
	else 
	{
		NoeudInt* aSupprimer = sommetPile;
		sommetPile = sommetPile->getPrecedent();
		delete aSupprimer;
	}	
}

int PileInt::consulter()
{
	if (estVide())
	{
		throw runtime_error("Action impossible: pile vide!");
	}
	else
	{
		return sommetPile->getContenu();
	}
}

