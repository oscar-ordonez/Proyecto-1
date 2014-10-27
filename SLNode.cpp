#include "SLNode.h"
#include "Object.h"
#include <iostream>
using namespace std;

SLNode::SLNode(){
next = NULL;
data = NULL;
}

SLNode::SLNode(Object* aData){
data = aData;
}

SLNode::SLNode(Object* aData,SLNode* aNext){
data = aData;
next = aNext;
}

SLNode::~SLNode(){
//cout << "entre a borrar el nodo" << endl;

//cout << "Data: " << data << endl;
//cout << "Next: " << next << endl;

if(data)
delete data;
if(next)
delete next;
}

void SLNode::print()const{
data->print();
}

SLNode* SLNode::getNext()const{
return next;
}

void SLNode::setNext(SLNode* aNext){
next = aNext;
}

Object* SLNode::getData()const{
return data;
}

void SLNode::setData(Object* aData){
data = aData;
}
