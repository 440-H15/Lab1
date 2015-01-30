#include "PileInt.h"


PileInt::PileInt()
{
}

bool PileInt::estVide(){

	if (topNode.getObject == nullptr){
		return true;
	}

	return false;

}