#include "noeudInt.h"	

NoeudInt::NoeudInt(int data, NoeudInt* nextNode)
{
	this->data = data;
	this->nextNode = nextNode;
}
NoeudInt::~NoeudInt() {}
int NoeudInt::getData()
{
	return this->data;
}
NoeudInt* NoeudInt::getNextNode()
{
	return this->nextNode;
}
