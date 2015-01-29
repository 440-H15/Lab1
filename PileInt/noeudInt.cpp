#include "noeudInt.h"	

NoeudInt::NoeudInt(int _nombre, NoeudInt* _next)
{
	nombre = _nombre;
	next = _next;
}

NoeudInt::NoeudInt()
{
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