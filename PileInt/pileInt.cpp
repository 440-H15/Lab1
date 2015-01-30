#include "PileInt.h"

PileInt::PileInt()
{
	sommetPile = nullptr;
}

bool PileInt::estVide()
{
	if (sommetPile == nullptr) {
		return true;
	}
	else
	{
		return false;
	}
}

void PileInt::empiler(int _nombre)
{
	NoeudInt* nouveauNoeud = new NoeudInt(_nombre, sommetPile);
	sommetPile = nouveauNoeud;
}

void PileInt::depiler()
{
	if (sommetPile != nullptr)
	{
		NoeudInt* noeudAEnlever = sommetPile;
		sommetPile = sommetPile->getPrecedent();
		delete noeudAEnlever;
	}
}

int PileInt::consulter()
{
	return sommetPile->getContenu();
}


