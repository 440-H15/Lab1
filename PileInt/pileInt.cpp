#include "PileInt.h"

PileInt::PileInt(void)
{
	premierNoeud = nullptr;
}

PileInt::~PileInt(void)
{
	NoeudInt* noeudEnlever = nullptr;
	while (premierNoeud != nullptr)
	{
		depiler();
	}
}

bool PileInt::estVide(){
	bool vide = true;
	if (premierNoeud != nullptr){
		vide = false;

	}
	return vide;
}

void PileInt::empiler(int _nombre)
{
	NoeudInt* nouveauNoeud = new NoeudInt;
	nouveauNoeud->nombre = _nombre;
	nouveauNoeud->prochainNoeud = premierNoeud;
	premierNoeud = nouveauNoeud;
}

void PileInt::depiler()
{
	if (premierNoeud != nullptr){
		NoeudInt* noeudEnlever = premierNoeud;
		premierNoeud = premierNoeud->prochainNoeud;
		delete noeudEnlever;

	}
}

int PileInt::consulter()
{
	int nombre = 0;
	if (premierNoeud != nullptr){
		nombre = premierNoeud->nombre;

	}
	return nombre;
}