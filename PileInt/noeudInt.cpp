#include "noeudInt.h"	

int NoeudInt::getContenu()
{
	return contenu;
}

void NoeudInt::setContenu(int _nombre)
{
	contenu = _nombre;
}

NoeudInt* NoeudInt::getPrecedent()
{
	return precedent;
}

void NoeudInt::setPrecedent(NoeudInt* _noeudPrecedent)
{
	precedent = _noeudPrecedent;
}