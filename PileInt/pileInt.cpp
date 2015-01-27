#include "PileInt.h"

PileInt::PileInt(){
	sommetPile = nullptr;
}

bool PileInt::estVide(){
	bool isEmpty = true;

	if (sommetPile != nullptr){
		isEmpty = false;
	}

	return isEmpty;
}

void PileInt::empiler(int _nombre){
	NoeudInt* newNode = new NoeudInt();

	*sommetPile = *newNode;
}


