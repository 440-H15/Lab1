#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	  NoeudInt(void);
	  int getContenu(void);
	  void setContenu(int _nombre);
	  NoeudInt* getPrecedent(void);
	  void setPrecedent(NoeudInt* _noeudPrecedent);
  private:
	  int contenu;
	  NoeudInt* precedent;
};

#endif //NOEUDINT_H_