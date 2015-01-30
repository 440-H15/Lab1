#include "PileInt.h"

PileInt::PileInt(){
	sommetPile = nullptr;
}

PileInt::~PileInt(){
	while (sommetPile != nullptr)
		depiler();
}
bool PileInt::estVide(){
	if (sommetPile == nullptr){
		return true;
	}
	return false;
}

void PileInt::empiler(int _nombre){
	NoeudInt* nouveauNoeud = new NoeudInt(_nombre);

	if (estVide()==true){
		sommetPile = nouveauNoeud;
	}
	else{
		nouveauNoeud->setPrecedent(sommetPile);
		sommetPile = nouveauNoeud;
	}

	
}

void PileInt::depiler(){
	//si c'est juste pour enlever 1 de la pile ceci est la méthode
	//sinon on met cela dans une boucle
	
		if (estVide() == false){
			NoeudInt* noeudASupprimer = sommetPile;
			sommetPile = sommetPile->getPrecedent();
			delete noeudASupprimer;
		}

	

}

int PileInt::consulter(){

	int contenu;
	contenu = sommetPile->returnContenu();
	return contenu;

}