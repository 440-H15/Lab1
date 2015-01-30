#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"

using namespace std;

class PileInt
{
  public:
	  PileInt(); // construteur
	  ~PileInt();//destructeur
	  bool estVide();
	  void empiler(int);
	  void depiler();
	  int consulter();

  private:
	  NoeudInt *sommetPile;
        
};

//constructeur
 PileInt::PileInt(void){
	sommetPile = nullptr;
}
 PileInt::~PileInt(){
	 while (estVide()== false)
	 {
		 depiler();
	 }
 }


 bool PileInt::estVide(){
	bool estVide = true;

	 if(sommetPile != nullptr){
		estVide = false; 
	 }
	 return estVide;
 }

 void PileInt::empiler(int _valeurInterieur){
	NoeudInt nouveauNoeud(_valeurInterieur, sommetPile);
	*sommetPile = nouveauNoeud;
 }
 void PileInt::depiler(){
	 if(estVide() == false){
	NoeudInt *noeudSupprimer = sommetPile;
	 *sommetPile = sommetPile->getPrecedent();
	 delete noeudSupprimer;
	 }
 }

 int PileInt::consulter(){
	 if (sommetPile->getContenu()){
		  return sommetPile->getContenu();
	 }
	 else
	 {
		// lancer l'Exception.
	 }
 }

#endif //PILE_H_