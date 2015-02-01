#include "PileInt.h"


using namespace std;

PileInt::PileInt(){

	sommetPile = nullptr;
}

PileInt::~PileInt(){


}

bool PileInt::estVide(){

	return sommetPile == nullptr;

}void PileInt::empiler(const int _nombre){

	if (estVide()){
		this->sommetPile = new NoeudInt(_nombre);
	}
	else{

		NoeudInt *noeudTemp = this->sommetPile;
		
		this->sommetPile = new NoeudInt(_nombre);
		this->sommetPile->setPrecedent(noeudTemp);

	}


}


