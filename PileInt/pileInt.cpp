#include "PileInt.h"
#include "noeudInt.h"
#include <iostream>

using namespace std;

PileInt::PileInt()
{
	sommetPile = nullptr;
}

PileInt::~PileInt()
{
	while (estVide() == false)
	{
		depiler();
	}
}

bool PileInt::estVide()
{
	bool isEmpty = true;

	if (sommetPile != nullptr)
	{
		isEmpty = false;
	}

	return isEmpty;
}

void PileInt::empiler(int _nombre)
{

	NoeudInt* newNode = new NoeudInt();
	newNode->setContenu(_nombre);
	newNode->setPrecedent(sommetPile);
	sommetPile = newNode;
	
}

void PileInt::depiler()
{

	if (!estVide())
	{
		NoeudInt* tempNode = new NoeudInt();
		*tempNode = *sommetPile;
		sommetPile = sommetPile->getPrecedent();
		delete tempNode;
	}
	else
	{
		throw runtime_error("La pile est vide");
	}

}

int PileInt::consulter()
{
	if (estVide())
	{
		throw runtime_error("La pile est vide");
	}
	else
	{
		return sommetPile->getContenu();
	}
	
}


