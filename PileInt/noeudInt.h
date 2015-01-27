#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	  NoeudInt(int contenu, NoeudInt* noeudPrecedent);
	 int getContenu();
	 void setContenu(int nombre);
	 NoeudInt* getPrecedent();
	 void setPrecedent(NoeudInt* noeudPrecedent);

	
  private:
	  int contenu;
	  NoeudInt* precedent;
	
};

#endif //NOEUDINT_H_