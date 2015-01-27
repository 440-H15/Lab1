#include "PileInt.h"
#include <iostream>

using namespace std;

void PileInt::empiler(int _nombre)
{
	NoeudInt * newNoeud = new NoeudInt();
	if (estVide())
	{
		sommetPile = newNoeud;
	}
	else
	{
		NoeudInt * tempNoeud = new NoeudInt();
		tempNoeud = sommetPile;
		sommetPile = newNoeud;
		sommetPile->setPrecedent(tempNoeud);
		delete tempNoeud;
	}

}

int PileInt::consulter()
{
	return sommetPile->getContenu();
}

void PileInt::depiler()
{
	if (!estVide())
	{
		NoeudInt * tempNoeud = new NoeudInt();
		tempNoeud = sommetPile;
		sommetPile = sommetPile->getPrecenent();
		delete tempNoeud;
	}
}

bool PileInt::estVide()
{
	if (sommetPile == nullptr){
		return true;
	}
	else
	{
		return true;
	}
}