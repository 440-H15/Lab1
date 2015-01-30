#include "noeudInt.h"	

NoeudInt::NoeudInt(){

}

NoeudInt::NoeudInt(int _nombre){
	contenu = _nombre;
}

void NoeudInt::setContenu(int _nombre){
	contenu = _nombre;
}

void NoeudInt::setPrecedent(NoeudInt *_noeudPrecedent){
	precedent = _noeudPrecedent;
}

int NoeudInt::getContenu(){
	return contenu;
}

NoeudInt *NoeudInt::getPrecedent(){
	return precedent;
}