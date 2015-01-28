#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
public:
	void setContenu(int _nombre);
	int getContenu();
	NoeudInt* getPrecedent();
	void setPrecedent(NoeudInt* noeudPrecedant);
  private:
	int contenu;
	NoeudInt* precedent;

};

#endif //NOEUDINT_H_