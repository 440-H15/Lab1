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

void PileInt::empiler(int _nombre){

}