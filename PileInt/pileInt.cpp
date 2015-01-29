#include "PileInt.h"
#include <stddef.h>
PileInt::PileInt()
{
	sommetPile = nullptr;
}


bool PileInt::estVide()
{
	if (sommetPile == nullptr)
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
	sommetPile = newNoeud;
}

void PileInt::depiler()
{
	sommetPile = nullptr;
}

int PileInt::consulter()
{
	int valeurSommet = sommetPile->getContenu();
	return valeurSommet;
}

