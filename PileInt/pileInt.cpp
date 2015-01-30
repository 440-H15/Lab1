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

bool PileInt::estVide()
{
	if (sommetPile == nullptr)
	{
		return true;
	}
	return false;
}

int PileInt::consulter()
{
	if (sommetPile != nullptr)
	{
		return sommetPile->getContenu;
	}
	else{
		if (estVide() == true) throw runtime_error("Le pile est vide");
	}
}

void PileInt::empiler(int _nombre)
{
	NoeudInt* temp = new NoeudInt();

	if (sommetPile == nullptr){
		temp->setContenu(_nombre);
		sommetPile = temp;
	}
	else
	{
		temp->setPrecedent(sommetPile);
		temp->setContenu(_nombre);
		sommetPile = temp;
	}
	delete temp;
}

void PileInt::depiler()
{
	if (sommetPile != nullptr){
		NoeudInt* temp = new NoeudInt();
		temp = sommetPile;
		sommetPile = temp->getPrecedent;
		delete temp;
	}
	else{
		if (estVide() == true) throw runtime_error("Le pile est vide");
	}
}