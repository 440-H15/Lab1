#include "PileInt.h"
#include <iostream>

using namespace std;

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
	if (estVide())
	{
		throw runtime_error("Le pile est vide");
	}
	else
	{
		return sommetPile->getContenu();
	}
}

void PileInt::empiler(int _nombre)
{
	if (estVide())
	{
		sommetPile = new NoeudInt;
		sommetPile->setContenu(_nombre);
		sommetPile->setPrecedent(nullptr);
	}
	else if (!estVide())
	{
		NoeudInt* temp = sommetPile;
		sommetPile = new NoeudInt;
		sommetPile->setContenu(_nombre);
		sommetPile->setPrecedent(temp);
	}
}

void PileInt::depiler()
{
	if (!estVide())
	{
		NoeudInt* temp = sommetPile;
		sommetPile = temp->getPrecedent();
		delete temp;
	}
	else if (estVide())
	{
		throw runtime_error("Le pile est vide");
	}
}