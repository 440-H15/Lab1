#include "PileInt.h"
#include <system_error>


PileInt::PileInt()
{
	sommetPile = nullptr;
}
PileInt::~PileInt()
{
	depiler();
}

void PileInt::empiler(int _nombre)
{
	NoeudInt* noeudAEmpiler = new NoeudInt();


	noeudAEmpiler->setContenu(_nombre);
	noeudAEmpiler->setPrecedent(sommetPile);

	sommetPile = noeudAEmpiler;
}

int PileInt::consulter()
{
	if (estVide() == true) throw std::runtime_error("La pile est vide");

	return sommetPile->getContenu();
}

void PileInt::depiler()
{
	if (estVide() == true) throw std::runtime_error("La pile est vide");
	
	//sommet dans temp
	NoeudInt* noeudAEnlever = sommetPile;

	//sommet = precedent
	sommetPile = sommetPile->getPrecedent();

	//libere la memoire
	delete noeudAEnlever;
}

bool PileInt::estVide()
{
	return (nullptr == sommetPile);
}


