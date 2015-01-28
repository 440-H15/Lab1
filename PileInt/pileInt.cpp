#include "PileInt.h"

PileInt::PileInt(){
	sommetPile = nullptr;
}

PileInt::~PileInt(){
	while (estVide() == false)
	{
		depiler();
	}
}

bool PileInt::estVide(){
	if (sommetPile == nullptr){
		return true;
	}
	return false;
}

void PileInt::empiler(int _nombre){
	NoeudInt* nouveauNoeud = new NoeudInt(_nombre);

	if (estVide()){
		sommetPile = nouveauNoeud;
	}
	else{
		nouveauNoeud->setPrecedent(sommetPile);
		sommetPile = nouveauNoeud;
	}

	
}

void PileInt::depiler(){

	
		if (estVide() == false){
			NoeudInt* noeudASupprimer = sommetPile;
			sommetPile = sommetPile->getPrecedent();
			delete noeudASupprimer;
		}
		else{
			throw runtime_error("La pile est vide");
		}

	

}

int PileInt::consulter(){
	int contenu = sommetPile->getContenu();
	return contenu;

}