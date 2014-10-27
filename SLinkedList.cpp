#include "Object.h"
#include "SLinkedList.h"
#include <iostream>

using namespace std;

SLinkedList::SLinkedList(){
	head = NULL;
}

SLinkedList::~SLinkedList(){
//cout << "entre a borrar." << endl;
	if(head)
		delete head;
	head = NULL;
	ssize = 0;
}

/*Insertar:
a) Si la lista esta vacia
b) Si se inserta al frente
c) Si se inserta al medio*/
bool SLinkedList::insert(Object* data,int pos){
	if(pos < 0 || pos > ssize)
		return false;
	SLNode* neo = new SLNode(data);
	if(!neo)
		return false;

	if(isEmpty()){
		head = neo;
	}else{
		if(pos == 0){
			neo->setNext(head);
			head = neo;
		}else{
			SLNode* tmpn = head;
			for(int i = 0; i < pos-1; i++){
				tmpn = tmpn->getNext();
			}
			neo->setNext(tmpn->getNext());
			tmpn->setNext(neo);

			if(pos == ssize)
				neo->setNext(NULL);

		}
	}
	ssize++;
	return true;
}

int SLinkedList::indexOf(Object* data)const{
	if(isEmpty()){
		return -1;
	}
	SLNode* tmpn = head;
	for(int i = 0; i < ssize; i++){
		if(tmpn->getData()->equals(data)){
			return i;
		}
		tmpn = tmpn->getNext();
	}
	return -1;
}

Object* SLinkedList::get(unsigned int pos)const{
	if(isEmpty()){
		return NULL;
	}
	if(pos < 0 && pos >= ssize){
		return NULL;
	}
	SLNode* tmpn = head;
	for(int i = 0; i < pos; i++){
		tmpn = tmpn->getNext();
	}
	return tmpn->getData();
}

Object* SLinkedList::remove(unsigned int pos){
	if(isEmpty()){
		return NULL;
	}
	if(pos < 0 || pos > ssize){
		return NULL;
	}

	SLNode* neo = head;
	Object* retVal = NULL;
	if(pos == 0){
		head = head->getNext();
	}else{
		for(int i = 0; i < pos-1; i++){
			neo = neo->getNext();
		}
		SLNode* tmpn = neo;
		neo = neo->getNext();
		tmpn->setNext(neo->getNext());
	}
	retVal = neo->getData();
	neo->setData(NULL);
	neo->setNext(NULL);
	delete neo;
	ssize--;
	return retVal;
}

int SLinkedList::prev(int pos)const{
	return pos-1;
}

int SLinkedList::next(int pos)const{
	return pos+1;
}

void SLinkedList::clear(){
	if(!(isEmpty())){
//cout << "estoy borrando la lista." << endl;
		delete head;
		head = NULL;
		ssize = 0;
	}
}

Object* SLinkedList::first()const{
	if(isEmpty()){
		return NULL;
	}

	return head->getData();
}

Object* SLinkedList::last()const{
	if(isEmpty()){
		return NULL;
	}

	SLNode* tmpn = head;
	for(int i = 0; i < ssize-1; i++){
		tmpn = tmpn->getNext();
	}

	return tmpn->getData();
}

void SLinkedList::print()const{
	if(!(isEmpty())){
		SLNode* tmpn = head;
		for(int i = 0; i < ssize; i++){
			tmpn->getData()->print();
			tmpn = tmpn->getNext();
		}
	}

}

bool SLinkedList::isEmpty()const{
	if(ssize == 0){
		return true;
	} else {
		return false;
	}
}

bool SLinkedList::isFull()const{
	return false;
}



