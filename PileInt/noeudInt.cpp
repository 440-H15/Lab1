#include "noeudInt.h"	

int NoeudInt::getContenu()
{
	return this->contenu;
}

void NoeudInt::setContenu(int _nombre)
{
	this->contenu = _nombre;
}

NoeudInt* NoeudInt::getPrecedent()
{
	return this->precedent;
}

void NoeudInt::setPrecedent(NoeudInt* _noeudPrecedent)
{
	this->precedent = _noeudPrecedent;
}