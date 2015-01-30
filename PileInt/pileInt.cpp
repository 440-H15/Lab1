#include "PileInt.h"
#include <iostream>
#include <stdexcept>

using namespace std;

PileInt::PileInt()
{
	sommetPile = nullptr;
}

PileInt::~PileInt()
{
	while (!estVide())
	{
		depiler();
	}
}

void PileInt::empiler(int _nombre)
{
	NoeudInt * newNoeud = new NoeudInt();
	newNoeud->setContenu(_nombre);
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
	else
	{
		throw runtime_error("la pile est vide");
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