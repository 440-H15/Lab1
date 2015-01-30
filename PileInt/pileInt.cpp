#include "PileInt.h"

PileInt::PileInt(){
	sommetPile = nullptr;
}

bool PileInt::estVide(){
	bool returnVal = false;
	if (sommetPile == nullptr) {
		returnVal = true;
	}
	return returnVal;
}

void PileInt::empiler(int _nombre){ // Two cases: Empty and 1 item
	NoeudInt *nouveauNoeud = new NoeudInt(_nombre);
	if (estVide()){
		sommetPile = nouveauNoeud;
	}
	else{
		NoeudInt *sommetTemp = sommetPile;
		sommetPile = nouveauNoeud;
		nouveauNoeud->setPrecedent(sommetTemp);
	}
}

void PileInt::depiler(){ // Two cases: 1 item, and more than one.

}