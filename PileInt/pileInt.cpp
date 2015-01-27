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
	return sommetPile->getContenu();
}

void PileInt::empiler(int _nombre)
{
	sommetPile = new NoeudInt;
	if (estVide())
	{
		sommetPile->setContenu(_nombre);
	}
	else if (!estVide())
	{
		NoeudInt* temp = sommetPile;
		sommetPile->setContenu(_nombre);
		sommetPile->setPrecedent(temp);
		delete temp;
	}
}

void PileInt::depiler()
{

}