#ifndef NOEUDINT_H_
#define NOEUDINT_H_

class NoeudInt
{
  public:
	  NoeudInt(void);
	  ~NoeudInt(void);
	  int GetInt();
	  void SetInt(int _nombre);
	  NoeudInt* GetNext();
	  void SetNext(NoeudInt* _next);
  private:
	  int nombre;
	  NoeudInt* next;
};

#endif //NOEUDINT_H_