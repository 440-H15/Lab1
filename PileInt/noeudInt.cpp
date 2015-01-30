#include "noeudInt.h"	

NoeudInt::NoeudInt(int _nombre, NoeudInt *_suivant)
{
	suivant = _suivant;
	nombre = _nombre;
}

NoeudInt* NoeudInt::getSuivant()
{
	return suivant;
}

int NoeudInt::getNombre()
{
	return nombre;
}
