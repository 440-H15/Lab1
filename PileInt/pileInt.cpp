#include "PileInt.h"
#include <system_error>

PileInt::PileInt(){
	noeudDessus = nullptr;
}

PileInt::~PileInt()
{
}

bool PileInt::estVide()
{
	return (noeudDessus == nullptr);
}

void PileInt::empiler(int element)
{
	if (estVide())
	{
		noeudDessus = new NoeudInt(element, nullptr);
		return;
	}
	else
	{
		NoeudInt *nouveauNoeudDessus = new NoeudInt(element, this->noeudDessus);
		this->noeudDessus = nouveauNoeudDessus;
	}
}

void PileInt::depiler()
{
	if (estVide())
		throw std::runtime_error("Yo le cave tu peux pas dépiler une pile vide, lol.");

	NoeudInt* noeudASupprimer = this->noeudDessus;
	noeudDessus = noeudDessus->getPrecedent();
	delete noeudASupprimer;
}

int PileInt::consulter()
{
	if (estVide())
		throw std::runtime_error("La pile est vide bro.");
	
	return noeudDessus->getContenu();
}