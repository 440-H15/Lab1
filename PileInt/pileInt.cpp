#include "PileInt.h"

bool PileInt::estVide()
{
	return sommetPile == nullptr;
}

void PileInt::empiler(int contenu)
{
	NoeudInt nouveauNoeud;
	sommetPile = &nouveauNoeud;
}