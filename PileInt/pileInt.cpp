#include "PileInt.h"
#include <system_error>

PileInt::PileInt()
{
	premierNoeud = nullptr;
}

PileInt::~PileInt()
{
	while (nullptr != premierNoeud)
	{
		depiler();
	}
}

bool PileInt::estVide()
{
	if (premierNoeud == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void PileInt::empiler(int _nombre)
{
	premierNoeud = new NoeudInt(_nombre, premierNoeud);
}

void PileInt::depiler()
{
	if (nullptr == premierNoeud)
	{
		throw std::runtime_error("La pile est vide!");
	}
	else
	{
		NoeudInt *temp = premierNoeud;
		premierNoeud = premierNoeud->getSuivant();
		delete temp;
	}
}

int PileInt::consulter()
{
	if (nullptr == premierNoeud)
	{
		throw std::runtime_error("La pile est vide!");
	}
	else
	{
		return premierNoeud->getNombre();
	}
}