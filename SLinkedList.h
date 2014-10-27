#ifndef SLINKEDLIST_H
#define SLINKEDLIST_H
#include "Object.h"
#include "SLNode.h"
#include "TDAList.h"

class SLinkedList : public TDAList {
protected:
	SLNode* head;
public:
	SLinkedList();
	virtual ~SLinkedList();
	virtual bool insert(Object*,int);
	virtual int indexOf(Object*)const;
	virtual Object* get(unsigned)const;
	virtual Object* remove(unsigned);
	virtual int prev(int)const;
	virtual int next(int)const;
	virtual void clear();
	virtual Object* first()const;
	virtual Object* last()const;
	virtual void print()const;
	virtual bool isEmpty()const;
	virtual bool isFull()const;
};

#endif
