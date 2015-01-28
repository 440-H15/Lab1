#include "PileInt.h"
#include <stdexcept>

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
	return sommetPile->getContenu();
}