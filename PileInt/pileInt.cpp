#include "pileInt.h"

PileInt::PileInt(){
	sommetPile = nullptr;
}

//PileInt::~PileInt(){
//	while (sommetPile != nullptr){
//		depiler();
//	}
//}

bool PileInt::estVide(){
	if (sommetPile == nullptr){
		return true;
	}
	return false;
}

//int PileInt::consulter(){
//
//}
//
void PileInt::empiler(int _nombre){

	NoeudInt* temp = new NoeudInt();

	if (sommetPile == nullptr){
		temp->setContenu(_nombre);
		sommetPile = temp;
	}
	else
	{
		temp->setPrecedent(sommetPile);
		temp->setContenu(_nombre);
		sommetPile = temp;
	}
	delete temp;
}

void PileInt::depiler(){
	if (sommetPile != nullptr){
		NoeudInt* temp = new NoeudInt();
		temp = sommetPile;
		sommetPile = temp->getPrecedent;
		delete temp;
	}
}