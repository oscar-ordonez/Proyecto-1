#include "Object.h"
#include "TDAList.h"
// Definición de los métodos que pueden ser definidos en la clase TDAList
// Constructor por Defecto
TDAList::TDAList(){
    ssize = 0;
}
// Destructor
TDAList::~TDAList(){
}
// Verificación de que la lista esté vacía
bool TDAList::isEmpty()const{
    return ssize == 0;
}
// Método Accesor del tamaño de la lista
int TDAList::size()const{
    return ssize;
}

