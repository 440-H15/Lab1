#include "PileInt.h"
#include <iostream>

#include <vld.h>
using namespace std;

PileInt::PileInt(){
	sommetPile = nullptr;
}

bool PileInt::estVide(){
	if (sommetPile == nullptr){
		return true;
	}
	else
	{
		return false;
	}

	//return (nullptr == sommetPile);
}

void PileInt::empiler(int _nombre){
	NoeudInt* nouveauNoeud = new NoeudInt();
	nouveauNoeud->setPrecedent(sommetPile);
	nouveauNoeud->setContenu(_nombre);
	sommetPile = nouveauNoeud;

}

void PileInt::depiler(){
	if (estVide() == true) throw runtime_error("La pile est vide");
	NoeudInt* tempNoeud = sommetPile;
	sommetPile = sommetPile->getPrecedent();
	delete tempNoeud;
}

int PileInt::consulter(){
	if (estVide() == true) throw runtime_error("La pile est vide");
	return sommetPile->getContenu();


}

PileInt::~PileInt(){
	while (estVide() == false){
		depiler();
	}


}