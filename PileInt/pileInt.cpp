#include "PileInt.h"

PileInt::PileInt()
{
	premierNoeud = nullptr;
}

PileInt::~PileInt()
{
	while (premierNoeud != nullptr){
		depiler();
	}
}

bool PileInt::estVide()
{
	if (premierNoeud == nullptr){
		return true;
	}
	return false;
}

void PileInt::empiler(int valeur)
{
	NoeudInt * noeudAjouter = new NoeudInt(valeur);

	if (premierNoeud == nullptr)
	{
		premierNoeud = noeudAjouter;
	}
	else
	{
		NoeudInt * tempNoeud = premierNoeud;
		premierNoeud = noeudAjouter;
		premierNoeud->assignerProchain(tempNoeud);
	}
}

void PileInt::depiler()
{
	if (premierNoeud != nullptr){
		NoeudInt * noeudADepiler = premierNoeud;
		premierNoeud = premierNoeud->chercherProchain();
		delete noeudADepiler;
	}
	else
	{
		throw runtime_error("La pile est vide");
	}
}

int PileInt::consulter()
{
	if (premierNoeud != nullptr)
	{
		return premierNoeud->contenu;
	}
	else
	{
		throw runtime_error("La pile est vide");
	}
}