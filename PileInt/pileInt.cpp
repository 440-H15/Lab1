#include "PileInt.h"
#include <stdexcept>

PileInt::PileInt()
{
	sommetPile = nullptr;
}
PileInt::~PileInt()
{}

bool PileInt::estVide()
{
	if (sommetPile == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void PileInt::empiler(int _nombre)
{
	NoeudInt* nouveauNoeud = new NoeudInt();
	nouveauNoeud->setContenu(_nombre);

	if (estVide())
	{
		nouveauNoeud->setPrecedent(nullptr);
		sommetPile = nouveauNoeud;
	}
	else
	{
		nouveauNoeud->setPrecedent(sommetPile);
		sommetPile = nouveauNoeud;
	}
}

void PileInt::depiler()
{
	if (!estVide())
	{
		NoeudInt* tempNoeud = new NoeudInt();
		if (sommetPile->getPrecedent() != nullptr)
		{
			tempNoeud = sommetPile->getPrecedent();
			delete sommetPile;
			sommetPile = tempNoeud;
		}
		else
		{
			delete sommetPile;
			sommetPile = nullptr;
		}
	}
	else
	{
		throw std::runtime_error("Le pile est déjà vidé");
	}
}

int PileInt::consulter()
{
	if (estVide())
	{
		throw std::runtime_error("Le pile est vide");
	}
	else
	{
		return sommetPile->getContenu();
	}
}
