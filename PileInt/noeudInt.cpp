#include "noeudInt.h"	

using namespace std;

NoeudInt::NoeudInt(){

}

NoeudInt::~NoeudInt(){

}


int NoeudInt::getContenu(){

	return contenu;
}

NoeudInt::NoeudInt(const int &_contenu){

	contenu = _contenu;

}

NoeudInt* NoeudInt::getPrecedent(){

	return precedent;

}
void NoeudInt::setPrecedent(NoeudInt *_noeudPrecent){

	precedent = _noeudPrecent;
}