#include "noeudInt.h"	


NoeudInt::NoeudInt(){
	*object = -1;
	nextNode = nullptr;
	
}

NoeudInt::NoeudInt( int* obj,NoeudInt* next){
	object = obj;
	nextNode = next;
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