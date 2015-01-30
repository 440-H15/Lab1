#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	  NoeudInt(int _nombre, NoeudInt* _noeudPrecedent);
	  ~NoeudInt();

	  int getNombre();
	  NoeudInt* getNoeud();
		
  private:
	  int nombre;
	  NoeudInt* noeudPrecedent;
};

#endif //NOEUDINT_H_