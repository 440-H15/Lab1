#include "noeudInt.h"

int NoeudInt::getContenu()
{
	return this->contenu;
}
void NoeudInt::setContenu(int _nombre)
{
	this->contenu = _nombre;
}
NoeudInt* NoeudInt::getPrecedant()
{
	return this->precedent;
}
void NoeudInt::setPrecedant(NoeudInt* _noeudPrecedant)
{
	this->precedent = _noeudPrecedant;
}

