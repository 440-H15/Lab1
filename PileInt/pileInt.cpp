#include "PileInt.h"

PileInt::PileInt(){

	sommetPile = nullptr;

}

PileInt::~PileInt(){
	delete sommetPile;
}


bool PileInt::estVide(){
	
	if (sommetPile == nullptr){
		return true;
	}
	else{
		return false;
	}

}

void PileInt::empiler(int _nombre){

	NoeudInt *newPtr = new NoeudInt;
	newPtr->setContenu(_nombre);


	if (sommetPile != nullptr){

		newPtr->setPrecedent(*sommetPile);

	}

	sommetPile = newPtr;
	newPtr = nullptr;

	delete newPtr;
}

void PileInt::depiler()
{

	if (sommetPile != nullptr){

		NoeudInt *newPtr = new NoeudInt;

		newPtr = sommetPile;
		*sommetPile = sommetPile->getPrecedent();

		delete newPtr;
	}


}

int PileInt::consulter()
{
	if (sommetPile == nullptr)
	{
		return 0;
	}
	else
	{
		return sommetPile->getContenu();
	}

}