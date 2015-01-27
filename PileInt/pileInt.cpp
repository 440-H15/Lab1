#include "PileInt.h"

PileInt::PileInt()
{
	sommetPile = nullptr;
}

bool PileInt::estVide()
{
	bool valeurRetour = false;
	if (sommetPile == nullptr){
		valeurRetour = true;
	}
	return valeurRetour;
}

int PileInt::consulter()
{
	return sommetPile->getContenu;
}

void PileInt::empiler(int _nombre)
{

}

void PileInt::depiler()
{

}