#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	  int contenu;
	  NoeudInt * precedent;
	
  private:
	  int getContenu();
	  int setContenu(int _nombre);
	  NoeudInt getPrecenent();
	  void setPrecedent(NoeudInt _noeudPrecedent);
	
};

#endif //NOEUDINT_H_