#include "PileInt.h"
#include <system_error>

PileInt::PileInt()
{
	premierNoeud = nullptr;
}

PileInt::~PileInt()
{
	while (!estVide())
	{
		depiler();
	}
}

bool PileInt::estVide()
{
	return premierNoeud == nullptr;
}

void PileInt::empiler(int _nombre)
{
	premierNoeud = new NoeudInt(_nombre, premierNoeud);
}

void PileInt::depiler()
{
	if (estVide())
	{
		throw std::runtime_error("La pile est vide!");
	}
	else
	{
		NoeudInt *noeudAEffacer = premierNoeud;
		premierNoeud = premierNoeud->getSuivant();
		delete noeudAEffacer;
	}
}

int PileInt::consulter()
{
	if (estVide())
	{
		throw std::runtime_error("La pile est vide!");
	}
	else
	{
		return premierNoeud->getNombre();
	}
}