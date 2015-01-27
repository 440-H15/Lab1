#include "noeudInt.h"	

NoeudInt::NoeudInt(int _contenu)
{
	this->contenu = _contenu;
}

NoeudInt* NoeudInt::getPrecedent()
{
	return this->precedent;
}