#include "noeudInt.h"	
#include <iostream>

NoeudInt::NoeudInt(){
	noeudPrecedent = NULL;
}

NoeudInt::~NoeudInt(){

}

int NoeudInt::getContenu(){
	return contenu;
}

void NoeudInt::setContenu(int _nombre){
	contenu = _nombre;
}

NoeudInt* NoeudInt::getPrecedent(){
	return noeudPrecedent;
}

void NoeudInt::setPrecedent(NoeudInt* _noeudPrecedent){
	noeudPrecedent = _noeudPrecedent;
}