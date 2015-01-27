#include "PileInt.h"

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
	NoeudInt *aSupprimer = this->sommetPile;
	this->sommetPile = aSupprimer->getPrecedent();

	delete aSupprimer;
}

int PileInt::consulter()
{
	return this->sommetPile->getContenu();
}
