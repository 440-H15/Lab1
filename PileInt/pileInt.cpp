#include "PileInt.h"

PileInt::PileInt()
{
	premierNoeud = nullptr;
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
		throw;
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
		throw;
	}
	else
	{
		return premierNoeud->getNombre();
	}
}