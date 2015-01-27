#include "PileInt.h"

PileInt::PileInt()
{
	premierNoeud = NULL;
}

PileInt::~PileInt()
{
	//insérer les delete
}

bool PileInt::estVide()
{
	if (premierNoeud == NULL){
		return true;
	}
	return false;
}

void PileInt::empiler(int valeur)
{
	if (premierNoeud == NULL)
	{
		premierNoeud = new NoeudInt(valeur);
	}
	else
	{
		NoeudInt * tempNoeud = premierNoeud;
		premierNoeud->contenu = valeur;
		premierNoeud->assignerProchain(tempNoeud);
	}
}