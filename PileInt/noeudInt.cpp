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

int NoeudInt::getContenu(){
	return contenu;
}

void NoeudInt::setContenu(int _nombre) {
	contenu = _nombre;
}