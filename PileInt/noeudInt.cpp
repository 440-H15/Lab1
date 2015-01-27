#include "noeudInt.h"	

NoeudInt::NoeudInt(int valeur)
{
	contenu = valeur;
}

void NoeudInt::assignerProchain(NoeudInt * prochain)
{
	suivant = prochain;
}