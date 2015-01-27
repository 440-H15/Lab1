#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	  NoeudInt(int);
	  void assignerProchain(NoeudInt*);

	  int contenu;
  private:
	  NoeudInt *suivant;
};

#endif //NOEUDINT_H_