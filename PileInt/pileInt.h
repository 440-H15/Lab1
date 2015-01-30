#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"

class PileInt
{
  public:
	  void push();
	  int pop();
	  int peek();
	  bool empty();
  private:
	  unsigned int size;
	  NoeudInt* firstNode;
};

#endif //PILE_H_