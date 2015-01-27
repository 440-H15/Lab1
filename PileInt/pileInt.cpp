#include "PileInt.h"
#include <iostream>


using namespace std;

PileInt::PileInt(){
	sommetPile = nullptr;
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
	sommetPile = new NoeudInt(_nombre, sommetPile);
}

