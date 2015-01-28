#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
public:
	void setContenu(int contenu);
	int getContenu();
	NoeudInt* getPrecedent();
	void setPrecedent();
  private:
	int contenu;
	NoeudInt* precedent;

};

#endif //NOEUDINT_H_