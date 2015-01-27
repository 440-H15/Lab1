#include "noeudInt.h"	

NoeudInt::NoeudInt(int _contenu)
{
	this->contenu = _contenu;
}

int NoeudInt::getContenu()
{
	return this->contenu;
}

NoeudInt* NoeudInt::getPrecedent()
{
	return this->precedent;
}