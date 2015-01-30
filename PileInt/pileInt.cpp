#include "PileInt.h"
#include "noeudInt.h"
#include <iostream>


using namespace std;

PileInt::PileInt(){
	sommetPile = nullptr;
}

PileInt::~PileInt()
{
	while (estVide() == false)
	{
		depiler();
	}
}

bool PileInt::estVide(){
	if (sommetPile == nullptr){
		return true;
	}
	else{
		return false;
	}
}

void PileInt::empiler(int _nombre){
	if (estVide())
	{
		sommetPile = nullptr;
	}
	sommetPile = new NoeudInt(_nombre, sommetPile);
}

void PileInt::depiler(){



	if (!estVide()){
		NoeudInt* noeudAEnlever = sommetPile;
		sommetPile = sommetPile->getNoeud();
		delete noeudAEnlever;
	}
	else
	{
		throw runtime_error("La pile est vide");
	}


}

int PileInt::consulter()
{
	int nb = 0;
	if (sommetPile != NULL)
	{
		nb = sommetPile->getNombre();
	}
	else
	{
		throw runtime_error("La pile est vide");
	}

	return nb;
}


