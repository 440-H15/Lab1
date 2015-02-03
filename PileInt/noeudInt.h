#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	  NoeudInt();
	  int getContenu();
	  void setContenu(int);
	  NoeudInt * getPrecedent();
	  void setPrecedent(NoeudInt *);

  private:
	  int contenu;
	  NoeudInt * precedent;
};

#endif //NOEUDINT_H_