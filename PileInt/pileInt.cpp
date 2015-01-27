#include "PileInt.h"
#include "noeudInt.h"

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
	newNode->setContenu(_nombre);
	newNode->setPrecedent(sommetPile);
	sommetPile = newNode;
	delete newNode;
}

void PileInt::depiler(){

	NoeudInt* tempNode = new NoeudInt();
	*tempNode = *sommetPile;
	sommetPile = sommetPile->getPrecedent();

	delete tempNode;

}

int PileInt::consulter(){
	int sommet;

	sommet = sommetPile->getContenu();

	return sommet;
}


