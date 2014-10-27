#include <iostream>
#include <cstdlib>
#include "TDAList.h"
#include "VArrayList.h" 
#include "FArrayList.h" 
#include "SLinkedList.h" 
#include "LinkedList.h" 
#include "DLCursorList.h"
#include "Integer.h"

using namespace std;

void testTDA(TDAList*);

int main(int argc, char *argv[]){
	TDAList* list;
	Object* data = NULL; 
	//list = new SLinkedList();
	//list = new FArrayList(5000);
	list = new DLCursorList(5000);
	int number, position;
	for (int i = 0; i < 5000; ++i){
		number = rand()%100;
		position = 0+(rand()%(int)(list->size()-0+1));
		list->insert(new Integer(number),position);
	}

	clock_t start;
	clock_t end;

	srand(time(NULL));

	
	for (int i = 0; i < 5000; ++i){
		start = clock();
		list->remove(0);
		end = clock()-start/CLOCKS_PER_SEC;
		cout << " " << end;
	}
	cout << endl;
    delete list;
    return 0;
}