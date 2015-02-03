#include "PileInt.h"
#include <system_error>


PileInt::PileInt()
{
	sommetPile = nullptr;
}
PileInt::~PileInt()
{
	do
	{
		depiler();
	} while (!estVide());
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
	if (estVide())
	{
		throw std::runtime_error("pile vide!");
	}
	else
	{
		NoeudInt * tempPtr = sommetPile;
		sommetPile = sommetPile->getPrecedent();
		delete tempPtr;
	}
	
		
}

int PileInt::consulter()
{
	if (estVide())
	{
		throw std::runtime_error("pile vide!");;
	}
	else
	{
		return sommetPile->getContenu();
	}
	
}