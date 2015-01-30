#include "PileInt.h"
#include <System_error>
using namespace std;

PileInt::PileInt()
{
	sommetPile = nullptr;
}

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
	NoeudInt* nouveauNoeud = new NoeudInt;
	nouveauNoeud->setContenu(_nombre);

	if (sommetPile == nullptr)
	{
		sommetPile = nouveauNoeud;
		sommetPile->setPrecedant(nullptr);
	}
	else
	{
		nouveauNoeud->setPrecedant(sommetPile);
		sommetPile = nouveauNoeud;
	}
}
void PileInt::depiler()
{

	if (sommetPile != nullptr)
	{
		NoeudInt* temp = sommetPile;
		sommetPile = temp->getPrecedant();
		delete temp;
	}
	else
	{
		throw runtime_error("Le pile est vide");
	}
}
int PileInt::consulter()
{
	if (estVide() == true) throw runtime_error("Le pile est vide");
	return sommetPile->getContenu();
}