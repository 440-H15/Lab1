#include "noeudInt.h"	



int NoeudInt::getContenu()
{
	return contenu;
}

void NoeudInt::setContenu(int _contenu)
{
	contenu = _contenu;
}

NoeudInt NoeudInt::getPrevious()
{
	return *previous;
}

void NoeudInt::setPrevious(NoeudInt *_previous)
{
	previous = _previous;
}