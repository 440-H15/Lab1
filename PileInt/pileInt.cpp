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

}

int PileInt::peek()
{

}

bool PileInt::empty()
{
	
}

