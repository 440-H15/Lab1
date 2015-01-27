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
	return 0;
}

void PileInt::depiler()
{
	NoeudInt *nodeToRemove;
	nodeToRemove = first;
	first = first->getPrevious();
	delete nodeToRemove;
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