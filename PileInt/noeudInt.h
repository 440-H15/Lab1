#ifndef NOEUDINT_H_
#define NOEUDINT_H_

#define NULL 0

class NoeudInt
{
  public:
	  NoeudInt(int data, NoeudInt* nextNode);
	  ~NoeudInt();
	  int getData();
	  NoeudInt* getNextNode();
  private:
	  NoeudInt* nextNode;
	  int data;
	
};

#endif //NOEUDINT_H_