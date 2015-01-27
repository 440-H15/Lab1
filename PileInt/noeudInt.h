#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	  int getContenu();
	  void setContenu(int _nombre);
	  NoeudInt * getPrecenent();
	  void setPrecedent(NoeudInt * _noeudPrecedent);
	
  private:
	  int contenu;
	  NoeudInt * precedent;
};

#endif //NOEUDINT_H_