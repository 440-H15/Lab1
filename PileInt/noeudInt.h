#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	  NoeudInt(int value, NoeudInt* noeud){
		  number = value;
		  previousNode = noeud;
	  }
	
	  int getNumber();
	  NoeudInt* getPrevious();
  private:
	  int number;
	  NoeudInt* previousNode;
};

#endif //NOEUDINT_H_