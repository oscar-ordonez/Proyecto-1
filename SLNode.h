#ifndef SLNODE_H
#define SLNODE_H
#include "Object.h"

class SLNode{
Object* data;
SLNode* next;
public:
SLNode();
SLNode(Object*);
SLNode(Object*,SLNode*);
~SLNode();
void print()const;
SLNode* getNext()const;
void setNext(SLNode*);
Object* getData()const;
void setData(Object*);
};

#endif
