#include "PileInt.h"
#include <system_error>

PileInt::PileInt(){

	sommetPile = nullptr;

}

PileInt::~PileInt(){

	while(estVide() == false){

		depiler();
	}

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

	NoeudInt *nouveauNoeud = new NoeudInt;
	nouveauNoeud->setContenu(_nombre);
	nouveauNoeud->setPrecedent(sommetPile);
	sommetPile = nouveauNoeud;
}

void PileInt::depiler()
{
