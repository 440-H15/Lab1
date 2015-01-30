#include "noeudInt.h"	
#include <stdlib.h>

NoeudInt::NoeudInt(){
	object = NULL;
	nextNode = NULL;
	
}

NoeudInt::NoeudInt( int obj,NoeudInt next){
	*object = obj;
	*nextNode = next;
}

NoeudInt NoeudInt::getNext(){

	return *nextNode;
}


int NoeudInt::getObject(){



	return *object;
}


void NoeudInt::setNext(NoeudInt next){

	*nextNode = next;
}