#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	  NoeudInt(int _nombre, NoeudInt *_suivant);
	  NoeudInt *getSuivant();
  private:
	  NoeudInt *suivant;
	  int nombre;
};

#endif //NOEUDINT_H_