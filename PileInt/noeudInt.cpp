#include "noeudInt.h"	

int NoeudInt::getContenu()
{
	return contenu;
}

NoeudInt* NoeudInt::getPrecedent()
{
	return precedent;
}

void NoeudInt::setContenu(int _nombre)
{
	contenu = _nombre;
}

void NoeudInt::setPrecedent(NoeudInt* _noeudPrecedent)
{
	precedent = _noeudPrecedent;
}