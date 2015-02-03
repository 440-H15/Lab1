#include "noeudInt.h"	

using namespace std;

NoeudInt::NoeudInt(){

}

NoeudInt::~NoeudInt(){

}


int NoeudInt::getContenu(){

	return this->contenu;
}

NoeudInt::NoeudInt(const int &_contenu){

	this->contenu = _contenu;

}

NoeudInt* NoeudInt::getPrecedent(){

	return this->precedent;

}
void NoeudInt::setPrecedent(NoeudInt *_noeudPrecent){

	this->precedent = _noeudPrecent;
}