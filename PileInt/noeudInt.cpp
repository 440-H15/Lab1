#include "noeudInt.h"	

NoeudInt::NoeudInt(int _contenu, NoeudInt* _noeudPrecedent)
{
	contenu = _contenu;
	precedent = _noeudPrecedent;
}

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