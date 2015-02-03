#include "noeudInt.h"	
NoeudInt::NoeudInt()
{
	contenu = 0;
	precedent = nullptr;
}
void NoeudInt::setContenu(int _nombre)
{
	contenu = _nombre;
}
int NoeudInt::getContenu()
{
	return contenu;
}
NoeudInt* NoeudInt::getPrecedent()
{
	return precedent;
}
void NoeudInt::setPrecedent(NoeudInt* _noeudPrecedent)
{
	precedent = _noeudPrecedent;
}