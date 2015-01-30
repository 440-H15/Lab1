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

void NoeudInt::setContenu(int _contenu)
{
	contenu = _contenu;
}

NoeudInt* NoeudInt::getPrecedent()
{
	return precedent;
}

void NoeudInt::setPrecedent(NoeudInt* _noeudPrecedent)
{
	precedent = _noeudPrecedent;
}


