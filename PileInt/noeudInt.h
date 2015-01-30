#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	  NoeudInt(int _nombre);
	  void setPrecedent(NoeudInt* firstNoeud);
	  NoeudInt* getPrecedent();
	  int getContenu();
	  void setContenu(int _nombre);
  private:
	  int contenu;
	  NoeudInt* precedent;
};

#endif //NOEUDINT_H_