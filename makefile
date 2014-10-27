exe:	main.o Integer.o LinkedList.o Object.o TDAList.o DLLNode.o FArrayList.o VArrayList.o SLinkedList.o DLCursorList.o SLNode.o
	g++ main.o Integer.o LinkedList.o Object.o TDAList.o DLLNode.o FArrayList.o VArrayList.o SLinkedList.o DLCursorList.o SLNode.o -o exe

main.o:	main.cpp TDAList.h LinkedList.h Integer.h VArrayList.h FArrayList.h SLinkedList.h DLCursorList.h
	g++ -c main.cpp

Integer.o:	Integer.cpp Integer.h Object.h
	g++ -c Integer.cpp

DLLNode.o:	DLLNode.cpp DLLNode.h
	g++ -c DLLNode.cpp

TDAList.o:	TDAList.h TDAList.cpp Object.h
	g++ -c TDAList.cpp

LinkedList.o:	LinkedList.cpp LinkedList.h TDAList.h Object.h
	g++ -c LinkedList.cpp

DLCursorList.o:	DLCursorList.cpp DLCursorList.h TDAList.h Object.h
	g++ -c DLCursorList.cpp

Object.o:	Object.h Object.cpp
	g++ -c Object.cpp

SLNode.o:	SLNode.cpp SLNode.h
	g++ -c SLNode.cpp

SLinkedList.o:	SLinkedList.cpp SLinkedList.h Object.h TDAList.h
	g++ -c SLinkedList.cpp

VArrayList.o:	VArrayList.cpp VArrayList.h Object.h TDAList.h
	g++ -c VArrayList.cpp

FArrayList.o:	FArrayList.cpp FArrayList.h Object.h TDAList.h
	g++ -c FArrayList.cpp

clean:
	rm *.o exe
