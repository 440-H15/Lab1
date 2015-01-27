#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	
	  int getContenu();
	  void setContenu(int _contenu);
	  NoeudInt* getPrevious();
	  void setPrevious(NoeudInt *_previous);
  private:
	  int contenu;
	  NoeudInt *previous;
	
};

#endif //NOEUDINT_H_