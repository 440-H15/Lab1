#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	  NoeudInt(int contenu, NoeudInt* _noeudPrecedent);
	 int getContenu();
	 void setContenu(int nombre);
	 NoeudInt* getPrecedent();
	 void setPrecedent(NoeudInt* _noeudPrecedent);

	
  private:
	  int contenu;
	  NoeudInt* precedent;
};

#endif //NOEUDINT_H_