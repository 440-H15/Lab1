#include "PileInt.h"
#include <stdexcept>

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
	//if (estVide()){
	//	sommetPile = nouveauNoeud;
	//}
	//else{
		NoeudInt *sommetTemp = sommetPile;
		sommetPile = nouveauNoeud;
		nouveauNoeud->setPrecedent(sommetTemp);
	//}
}

void PileInt::depiler(){
	
	if (estVide() == true) throw std::runtime_error("La pile est vide");
	
	NoeudInt* temp = sommetPile;

	sommetPile = sommetPile->getPrecedent();

	delete temp;
	
}

int PileInt::consulter(){
	
	if (estVide() == true) throw std::runtime_error("La pile est vide");

	return sommetPile->getContenu();
}