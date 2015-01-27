#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	  NoeudInt();
	  ~NoeudInt();

	  int getContenu();
	  void setContenu(int _nombre);
	  NoeudInt* getPrecedent();
	  void setPrecedent(NoeudInt* _noeudPrecedent);

  private:
	  int contenu;
	  NoeudInt* noeudPrecedent;
};

#endif //NOEUDINT_H_