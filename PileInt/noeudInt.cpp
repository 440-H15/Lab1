#include "noeudInt.h"	

NoeudInt::NoeudInt()
{
	nombre = 0;
}

NoeudInt::~NoeudInt()
{
}

int NoeudInt::GetInt()
{
	return nombre;
}

void NoeudInt::SetInt(int _nombre)
{
	nombre = _nombre;
}

NoeudInt* NoeudInt::GetNext()
{
	return next;
}

void NoeudInt::SetNext(NoeudInt* _next)
{
	next = _next;
}