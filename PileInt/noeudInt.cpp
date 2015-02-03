#include "noeudInt.h"	


NoeudInt::NoeudInt()
{
	contenu = 0;
	precedent = nullptr;
}
int NoeudInt::getContenu()
{
	return contenu;
}

void NoeudInt::setContenu(int nouveauContenu)
{
	contenu = nouveauContenu;
}

NoeudInt * NoeudInt::getPrecedent()
{
	return precedent;
}

void NoeudInt::setPrecedent(NoeudInt * nouveauPrecedent)
{
	precedent = nouveauPrecedent;
}