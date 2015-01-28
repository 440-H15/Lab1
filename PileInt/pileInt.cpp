#include "PileInt.h"
#include <system_error>

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


	if (sommetPile == nullptr){

		sommetPile = newPtr;

	}
	else
	{
		newPtr->setPrecedent(sommetPile);
	}
	
	sommetPile = newPtr;

	
}

void PileInt::depiler()
{

	if (sommetPile != nullptr){

		NoeudInt *newPtr = sommetPile;
		sommetPile = sommetPile->getPrecedent();
		newPtr = nullptr;

		delete newPtr;
	}
	else
	{
		throw std::runtime_error("La pile est vide");
	}


}

int PileInt::consulter()
{
	if (sommetPile == nullptr)
	{
		throw std::runtime_error("La pile est vide");
	}
	else
	{
		return sommetPile->getContenu();
	}

}