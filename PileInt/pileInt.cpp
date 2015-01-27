#include "PileInt.h"
#include <system_error>

PileInt::PileInt()
{
	this->sommetPile = nullptr;
}

bool PileInt::estVide()
{
	return (this->sommetPile == nullptr);
}

void PileInt::empiler(int _nombre)
{
	NoeudInt *nouveauNoeud = new NoeudInt();
	nouveauNoeud->setContenu(_nombre);
	nouveauNoeud->setPrecedent(this->sommetPile);

	sommetPile = nouveauNoeud;
}

void PileInt::depiler()
{
	if (estVide())
	{
		throw std::runtime_error("Le pile est vide");
	}

	NoeudInt *aSupprimer = this->sommetPile;
	this->sommetPile = aSupprimer->getPrecedent();

	delete aSupprimer;
}

int PileInt::consulter()
{
	if (estVide())
	{
		throw std::runtime_error("Le pile est vide");
	}

	return this->sommetPile->getContenu();
}
