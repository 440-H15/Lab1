#include "noeudInt.h"	

NoeudInt::NoeudInt(int _nombre){
	contenu = _nombre;
	precedent = nullptr;
}

void NoeudInt::setPrecedent(NoeudInt* firstNoeud){
	precedent = firstNoeud;
}

NoeudInt* NoeudInt::getPrecedent(){
	return precedent;
}