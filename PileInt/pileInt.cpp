#include "PileInt.h"


PileInt::PileInt()
{
	first = nullptr;
}


void PileInt::empiler(int _nombre)
{
	NoeudInt *newNode = new NoeudInt();
	newNode->setContenu(_nombre);
	if(estVide()){
		newNode->setPrevious(nullptr);
		first = newNode;
		
	}
	else{
		newNode->setPrevious(first);
		first = newNode;
	}
}

int PileInt::consulter()
{
	if (!estVide()){
		return first->getContenu();
	}
	else{
		throw runtime_error("Le pile est vide");
	}
	
}

void PileInt::depiler()
{
	if (!estVide()){
	NoeudInt *nodeToRemove = new NoeudInt();
	*nodeToRemove = *first;
	first = first->getPrevious();
	delete nodeToRemove;
	}
	else{
		throw runtime_error("Le pile est vide");
	}
}

bool PileInt::estVide()
{
	
	if (first == nullptr)
	{
		return true;
	}
	else{
		return false;
	}
	
}