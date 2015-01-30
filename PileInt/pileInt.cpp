#include "PileInt.h"
#include "noeudInt.h"
#include <iostream>


using namespace std;

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

void PileInt::empiler(int _nombre){
	sommetPile = new NoeudInt(_nombre, sommetPile);
}

void PileInt::depiler(){

	if (estVide()) throw runtime_error("Le pile est vide");

	NoeudInt* noeudAEnlever = sommetPile;
	sommetPile = sommetPile->getPrecedent();
	delete noeudAEnlever;
}

int PileInt::consulter()
{
	if (estVide()) throw runtime_error("Le pile est vide");

	return sommetPile->getContenu();;
}

bool PileInt::estVide(){
	return (sommetPile == nullptr);
}