#include "PileInt.h"
#include <stddef.h>
#include <system_error>
using namespace std;

PileInt::PileInt()
{
	sommetPile = nullptr;
}
PileInt::~PileInt()
{
	if (estVide() == false)
	{
		depiler();
	}
	
}

bool PileInt::estVide()
{
	if (sommetPile==nullptr)
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
	NoeudInt* newNoeud = new NoeudInt;
	newNoeud->setContenu(_nombre);
	newNoeud->setPrecedent(sommetPile);
	sommetPile = newNoeud;
}

void PileInt::depiler()
{
	if (estVide() == true) throw runtime_error("Le pile est vide");
	NoeudInt* noeudTemp = new NoeudInt;
	noeudTemp = sommetPile;
	sommetPile = sommetPile->getPrecedent();
	delete noeudTemp;
}

int PileInt::consulter()
{
	if (estVide() == true) throw runtime_error("Le pile est vide");
	return sommetPile->getContenu();
}
