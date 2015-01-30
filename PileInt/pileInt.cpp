#include "PileInt.h"
#include <system_error>
using namespace std;


PileInt::PileInt()
{
	sommetPile = nullptr;
}

PileInt::~PileInt()
{
	while (estVide() == false)
	{
		depiler();
	}
}

bool PileInt::estVide()
{
	if (sommetPile == nullptr)
	{
		return true;
	}
	return false;
}

void PileInt::empiler(int i)
{
	NoeudInt* nouveauNoeud = new NoeudInt();
	nouveauNoeud->SetInt(i);
	nouveauNoeud->SetNext(sommetPile);
	sommetPile = nouveauNoeud;
}

void PileInt::depiler()
{
	if (estVide() == true) throw runtime_error("la pile est vide");
		
	NoeudInt* noeudAEnlever = sommetPile;
	sommetPile = sommetPile->GetNext();
	delete noeudAEnlever;
}

int PileInt::consulter()
{
	if (estVide() == true) throw runtime_error("la pile est vide");
	return sommetPile->GetInt();
}