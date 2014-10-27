#include "Object.h"
#include "TDAList.h"
// Definici�n de los m�todos que pueden ser definidos en la clase TDAList
// Constructor por Defecto
TDAList::TDAList(){
    ssize = 0;
}
// Destructor
TDAList::~TDAList(){
}
// Verificaci�n de que la lista est� vac�a
bool TDAList::isEmpty()const{
    return ssize == 0;
}
// M�todo Accesor del tama�o de la lista
int TDAList::size()const{
    return ssize;
}

