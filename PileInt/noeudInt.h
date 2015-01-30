#ifndef NOEUDINT_H_
#define NOEUDINT_H_

#include <iostream>

using namespace std;

class NoeudInt
{
  public:
	  int getContenu();
	  void setContenu(int _nombre);
	  NoeudInt* getPrecedent();
	  void setPrecedent(NoeudInt* _noeudPrecedent);
	
  private:
	  int contenu;
	  NoeudInt* precedent;

};

#endif //NOEUDINT_H_