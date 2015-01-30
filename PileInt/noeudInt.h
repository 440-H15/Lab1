#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
public:
	NoeudInt(int i);
	void setContenu(int _nombre);
	int getContenu();
	NoeudInt* getPrecedent();
	void setPrecedent(NoeudInt* _noeudPrecedent);
private:
	int contenu;
	NoeudInt* precedent;
};

#endif //NOEUDINT_H_