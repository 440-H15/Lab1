#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
public:

	NoeudInt(const int &_contenu);
	NoeudInt* getPrecedent();
	int getContenu();
	void setPrecedent(NoeudInt* _noeudPrecedent);

private:
	int contenu;
	NoeudInt* precedent = nullptr;
};

#endif //NOEUDINT_H_