#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	  NoeudInt();
	  ~NoeudInt();
	  int getData();
	  NoeudInt* getNextNode();
  private:
	  NoeudInt* nextNode;
	  int data;
	
};

#endif //NOEUDINT_H_