#ifndef PILE_H_
#define PILE_H_

#include "noeudInt.h"

class PileInt
{
  public:
	  
	  PileInt(void);
	  ~PileInt(void);

	  bool estVide();
	  void empiler(int _nombre);
	  void depiler();
	  int consulter();

	  NoeudInt* premierNoeud;
	     
  private:
        

};

#endif //PILE_H_