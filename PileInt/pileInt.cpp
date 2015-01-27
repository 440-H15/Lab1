#include "PileInt.h"
#include <iostream>


using namespace std;

PileInt::PileInt(){
	sommetPile = nullptr;
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
	NoeudInt *noeudAjouter = new NoeudInt();
	noeudAjouter->setContenu(_nombre);
	noeudAjouter->setPrecedent(sommetPile);
	sommetPile = noeudAjouter;
}

void PileInt::depiler(){
	if (estVide() == false){
		NoeudInt* noeudAEnlever = sommetPile;
		sommetPile = noeudAEnlever->getPrecedent();
		delete noeudAEnlever;
	}
}

int PileInt::consulter(){
	int resultat = sommetPile->getContenu();
	return resultat;
}
