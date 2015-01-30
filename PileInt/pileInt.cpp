#include "PileInt.h"

PileInt::PileInt()
{
	this->size = 0;
	this->firstNode = NULL;
}

PileInt::~PileInt() {}

void PileInt::push(int data)
{
	if (!firstNode)
	{
		firstNode = new NoeudInt(data, NULL);
	}
	else
	{
		firstNode = new NoeudInt(data, firstNode);
	}
}

int PileInt::pop()
{
	if (firstNode) {
		if (firstNode->getNextNode)
		{
			NoeudInt* tempNode = firstNode;
			firstNode = firstNode->getNextNode();
			delete tempNode;
		}
		else
		{
			delete firstNode;
			firstNode = NULL;
		}
	}
}

int PileInt::peek()
{
	if (firstNode) {
		return firstNode->getData();
	}
	return 0;
}

bool PileInt::empty()
{
	if (firstNode)
	{
		return false;
	}
	return true;
}

