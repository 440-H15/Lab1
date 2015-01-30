#include "noeudInt.h"	

NoeudInt::NoeudInt(int _nombre, NoeudInt* _noeudPrecedent){
	nombre = _nombre;
	noeudPrecedent = _noeudPrecedent;
}

NoeudInt::~NoeudInt(){

}

int NoeudInt::getNombre()
{
	return nombre;
}

NoeudInt* NoeudInt::getNoeud()
{
	return noeudPrecedent;
}