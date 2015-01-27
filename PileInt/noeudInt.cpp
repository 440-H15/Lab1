#include "noeudInt.h"	
#include <iostream>

using namespace std;

int NoeudInt::getContenu()
{
	return contenu;
}

void NoeudInt::setContenu(int _nombre)
{
	contenu = _nombre;
}

NoeudInt * NoeudInt::getPrecenent()
{
	return precedent;
}

void NoeudInt::setPrecedent(NoeudInt * _noeudPrecedent)
{
	precedent = _noeudPrecedent;
}