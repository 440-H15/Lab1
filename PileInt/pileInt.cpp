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
	sommetPile = new NoeudInt(i);
}

void PileInt::depiler()
{
	sommetPile = nullptr;
}

int PileInt::consulter()
{
	return sommetPile->getContenu();
}