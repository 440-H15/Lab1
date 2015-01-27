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
	if (premierNoeud == nullptr)
	{
		premierNoeud = new NoeudInt(valeur);
	}
	else
	{
		NoeudInt * tempNoeud = premierNoeud;
		premierNoeud = new NoeudInt(valeur);
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