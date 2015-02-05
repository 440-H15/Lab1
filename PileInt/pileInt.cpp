#include "PileInt.h"
#include <system_error>

using namespace std;

PileInt::PileInt(){
	sommetPile = nullptr;
}

PileInt::~PileInt(){

	while (!estVide()){
		depiler();
	}
}

bool PileInt::estVide(){
	return sommetPile == nullptr;
}
void PileInt::empiler(const int &_nombre){

	if (estVide()){
		sommetPile = new NoeudInt(_nombre);
	}
	else{

		NoeudInt* noeudTemp = this->sommetPile;
		sommetPile = new NoeudInt(_nombre);
		sommetPile->setPrecedent(noeudTemp);
	}
}

void PileInt::depiler(){

	if (estVide() == true) throw runtime_error("Le pile est vide");
		NoeudInt* noeudTemp = sommetPile;
		sommetPile = sommetPile->getPrecedent();
		delete noeudTemp;

	
}
int PileInt::consulter(){

	if (estVide() == true) throw runtime_error("Le pile est vide");
	return sommetPile->getContenu();


}