#include "PileInt.h"

bool PileInt::estVide()
{
	return sommetPile == nullptr;
}

void PileInt::empiler(int _nombre)
{
	NoeudInt nouveauNoeud;
	sommetPile = &nouveauNoeud;
}

void PileInt::depiler(){
	sommetPile = nullptr;
}