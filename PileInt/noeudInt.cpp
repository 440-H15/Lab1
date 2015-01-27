#include "noeudInt.h"	

NoeudInt::NoeudInt(int valeur)
{
	contenu = valeur;
	suivant = nullptr;
}

void NoeudInt::assignerProchain(NoeudInt * prochain)
{
	suivant = prochain;
}

NoeudInt* NoeudInt::chercherProchain()
{
	return suivant;
}