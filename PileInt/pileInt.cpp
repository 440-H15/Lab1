#include "PileInt.h"


PileInt::PileInt()
{
	sommetPile = nullptr;
}
PileInt::~PileInt()
{}

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
	NoeudInt* nouveauNoeud = new NoeudInt();
	nouveauNoeud->setContenu(_nombre);

	if (estVide())
	{
		nouveauNoeud->setPrecedent(nullptr);
		sommetPile = nouveauNoeud;
	}
	else
	{
		nouveauNoeud->setPrecedent(sommetPile);
		sommetPile = nouveauNoeud;
	}
}

void PileInt::depiler()
{
	if (!estVide())
	{
		NoeudInt* tempNoeud = new NoeudInt();
		if (sommetPile->getPrecedent() != nullptr)
		{
			tempNoeud = sommetPile->getPrecedent();
			delete sommetPile;
			sommetPile = tempNoeud;
		}
		else
		{
			sommetPile = nullptr;
			delete sommetPile;
		}
	}
}

int PileInt::consulter()
{
	return sommetPile->getContenu();
}
