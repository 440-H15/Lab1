#include "PileInt.h"

#include <stdexcept>

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

void PileInt::empiler(int _nombre)
{
	NoeudInt* nouveauNoeud = new NoeudInt(_nombre, sommetPile);
	sommetPile = nouveauNoeud;
}

void PileInt::depiler()
{
	if (sommetPile != nullptr)
	{
		NoeudInt* noeudAEnlever = sommetPile;
		sommetPile = sommetPile->getPrecedent();
		delete noeudAEnlever;
	}
	else
	{
		throw std::runtime_error("La pile est vide");
	}
}

int PileInt::consulter()
{
	if (estVide() == true)
	{
		throw std::runtime_error("La pile est vide");
	}
	else
	{
		return sommetPile->getContenu();
	}
}

bool PileInt::estVide()
{
	return sommetPile == nullptr;
}


 