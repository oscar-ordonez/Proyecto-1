#ifndef TDALIST_H
#define TDALIST_H
#include "Object.h"

/*
* Esta es la clase Base para la Implementaci�n del TDA Lista
* Cualquier implementaci�n de este TDA deber� ser descendiente de esta clase.
* Todas las operaciones est�n declaradas, no as� definidas, lo cual hace
* que esta clase sea abstracta; y obliga a que las descendientes las definan.
* N�tese que tienen todas las operaciones colocadas en la especificaci�n
* vista en clase.
*/

//actualizar este y linkedlist, el erase y el reset por remove y clear

//TDAList no puede ser interfaz en java porque tiene un dato miembro

class TDAList : public Object{
  public:
    unsigned int ssize;
  public:
    TDAList();
    virtual ~TDAList();
    virtual bool insert(Object*, int) = 0;
    virtual int indexOf(Object*)const = 0;
    virtual Object* get(unsigned)const = 0;
    virtual Object* remove(unsigned) = 0;
    virtual int prev(int) const = 0;
    virtual int next(int) const = 0;
    virtual void clear() = 0;
    virtual Object* first()const = 0;
    virtual Object* last()const = 0;
    virtual void print()const = 0;
    virtual bool isEmpty()const;
    virtual bool isFull()const = 0;
    ////////int getSize()const;
    int size()const;
};

#endif
