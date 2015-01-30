#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	 NoeudInt(int _contenu,NoeudInt *_precedent); // construteur
	 ~NoeudInt(); //destructeur
	 NoeudInt getPrecedent();
	 int getContenu();
  private:
	  NoeudInt *precedent;
	  int contenu;


};

//constructeur
NoeudInt::NoeudInt(int _valeurInterieur, NoeudInt *_noeudSommetActuellement){
	precedent = _noeudSommetActuellement;
	contenu = _valeurInterieur;

}

NoeudInt::~NoeudInt(){

}

NoeudInt NoeudInt::getPrecedent()
{
	return *precedent;
}
int NoeudInt::getContenu()
{
	return contenu;
}


#endif //NOEUDINT_H_