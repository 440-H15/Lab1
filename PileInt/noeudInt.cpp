#include "noeudInt.h"	

NoeudInt::NoeudInt(int _contenu)
{
	this->contenu = _contenu;
}

int NoeudInt::getContenu()
{
	return this->contenu;
}

void NoeudInt::setPrecedent(NoeudInt* _noeudPrecedent)
{
	this->precedent = _noeudPrecedent;
}

NoeudInt* NoeudInt::getPrecedent()
{
	return this->precedent;
}