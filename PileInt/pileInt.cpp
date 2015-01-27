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
	nouveauNoeud->setPrecedent(nullptr);

	sommetPile = nouveauNoeud;
}

void PileInt::depiler()
{

}

int PileInt::consulter()
{
	return this->sommetPile->getContenu();
}
