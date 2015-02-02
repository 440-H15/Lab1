#include "PileInt.h"
#include <stddef.h>
PileInt::PileInt()
{
	sommetPile = nullptr;
}


bool PileInt::estVide()
{
	if (sommetPile==nullptr)
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
	NoeudInt* newNoeud = new NoeudInt;
	newNoeud->setContenu(_nombre);
	newNoeud->setPrecedent(sommetPile);
	sommetPile = newNoeud;
}

void PileInt::depiler()
{
	NoeudInt* noeudTemp = new NoeudInt;
	noeudTemp = sommetPile;
	sommetPile = sommetPile->getPrecedent();
	delete noeudTemp;
}

int PileInt::consulter()
{
	return sommetPile->getContenu();
}
