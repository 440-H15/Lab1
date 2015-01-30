#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	  int getContenu();
	  void setContenu(int _nombre);
	  NoeudInt* getPrecedant();
	  void setPrecedant(NoeudInt* _noeudPrecedant);
  private:
	  int contenu;
	  NoeudInt* precedent;
};

#endif //NOEUDINT_H_