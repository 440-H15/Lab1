#include "PileInt.h"


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

void PileInt::empiler(int nouveauContenu)
{
	NoeudInt * nouveauNoeud = new NoeudInt();
	nouveauNoeud ->setContenu(nouveauContenu);
	nouveauNoeud ->setPrecedent(sommetPile);
	sommetPile = nouveauNoeud;

}

void PileInt::depiler()
{

	do
	{
		NoeudInt * tempPtr = sommetPile -> getPrecedent();
		delete sommetPile;
		sommetPile = tempPtr;

	} while (sommetPile != nullptr);
	
		
	

}

int PileInt::consulter()
{
	return sommetPile->getContenu();
}