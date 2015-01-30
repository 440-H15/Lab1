#include "PileInt.h"

#include <exception>
using namespace std;

PileInt::PileInt(){
	nbValues = 0;
	lastValues = NULL;
}

void PileInt::empiler(int valeur){	
    NoeudInt* newNode = new NoeudInt(valeur, lastValues);

	lastValues = newNode;

	nbValues = nbValues + 1;
}

void PileInt::depiler(){
	if (nbValues == 0){
		throw(new exception("NULLPOINTEREXCEPTION"));
	}
	else{
	NoeudInt* nodeToDelete = lastValues;
	lastValues = lastValues->getPrevious();
	nbValues = nbValues - 1;
	delete nodeToDelete;
}
}

int PileInt::consulter(){
	return lastValues->getNumber();
}

bool PileInt::estVide(){
	bool returnValue = false;

	if (nbValues == 0){
		returnValue = true;
	}

	return returnValue;
}