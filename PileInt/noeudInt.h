#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	  NoeudInt(int obj, NoeudInt next);
	  NoeudInt();
	  NoeudInt getNext();
	  int getObject();
	  void setNext(NoeudInt next);
  private:
	  int* object;
	  NoeudInt* nextNode;
};

#endif //NOEUDINT_H_