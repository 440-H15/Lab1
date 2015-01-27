#include "PileInt.h"

PileInt::PileInt()
{
	sommetPile = nullptr;
}

bool PileInt::estVide()
{
	if (sommetPile == nullptr)
		return true;
	return false;
}

void PileInt::empiler(int i)
{
	NoeudInt* temp = new NoeudInt(i);

	if (sommetPile == nullptr)
	{
		sommetPile = temp;
		sommetPile->setPrecedent(nullptr);
	}
	else
	{
		temp->setPrecedent(sommetPile);
		sommetPile = temp;
	}
}

void PileInt::depiler()
{
	if (sommetPile->getPrecedent() == nullptr)
	{
		delete sommetPile;
		sommetPile = nullptr;
	}
	else
	{
		NoeudInt* temp = sommetPile;
		sommetPile = sommetPile->getPrecedent();
		delete temp;
	}
}

int PileInt::consulter()
{
	return sommetPile->getContenu();
}