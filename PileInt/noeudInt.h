#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	  NoeudInt();
	  ~NoeudInt();

	 
	  NoeudInt(const int &_contenu);

	  NoeudInt *getPrecedent();
	  int getContenu();
	  void setPrecedent(NoeudInt *_noeudPrecent);

  private:

	  int contenu;
	  NoeudInt *precedent;

	
};

#endif //NOEUDINT_H_