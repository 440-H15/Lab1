#include "PileInt.h"
#include "stdexcept"

using namespace std;

PileInt::PileInt(){
	sommetPile = nullptr;
}

void PileInt::empiler(int _nombre){
	NoeudInt* nouveauNoeud = new NoeudInt();
	nouveauNoeud->setPrecedent(sommetPile);
	nouveauNoeud->setContenu(_nombre);
	sommetPile = nouveauNoeud;

	nouveauNoeud = nullptr;
	delete nouveauNoeud;
}

int PileInt::consulter(){
	if (!estVide()){
		return sommetPile->getContenu();
	}
	else {
		throw runtime_error("La pile est vide");
	}
}

void PileInt::depiler(){
	if (!estVide()){
		NoeudInt *temp = sommetPile->getPrecedent();
		delete sommetPile;
		sommetPile = temp;

		temp = nullptr;
		delete temp;

	} else {
		throw runtime_error("La pile est vide");
	}
}

bool PileInt::estVide(){
	if (sommetPile == nullptr){
		return true;
	}
	else {
		return false;
	}
}