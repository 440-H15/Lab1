#include "noeudInt.h"	

NoeudInt::NoeudInt(int _nombre, NoeudInt* _noeudPrecedent)
{
	contenu = _nombre;
	noeudPrecedent = _noeudPrecedent;
}

NoeudInt::~NoeudInt()
{
}

int NoeudInt::getContenu()
{
	return contenu;
}

NoeudInt* NoeudInt::getPrecedent()
{
	return noeudPrecedent;
}