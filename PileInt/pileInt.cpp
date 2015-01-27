#include "PileInt.h"

PileInt::PileInt()
{
	sommetPile = nullptr;
}

PileInt::~PileInt()
{
	while (sommetPile != nullptr)
	{
		depiler();
	}
}

void PileInt::empiler(int nombre)
{

}

void PileInt::depiler()
{

}

int PileInt::consulter()
{
	
}

bool PileInt::estVide()
{
	return sommetPile == nullptr;
}


 