#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

typedef struct _nodo{
     int info;
     struct _nodo *siguiente;
     struct _nodo *anterior;
 }nodo;
 
 typedef struct{
 	int tamano;
 	nodo *tope;
 }pila;
 
 nodo *tope;  //este puntero es para el último elemento de la pila.
 nodo *nuevo; // puntero para almacenar el nodo que se va a insertar 
 nodo *aux;   
 nodo *elimina;
 
 //Para inicializar una pila
 void inicializa(pila *pl)
 {
 	pl-> tamano=0;
 	pl->tope=NULL;
 }
 //Tamaño de la pila
 int tam(pila *pla)
 {
 	return pla->tamano;
 }
 //Revisa si la pila esta vacia
 int esVacia(pila *pla)
 {
 	if(tam(pla)==0)
 		return 1;
 	else
 		return 0;
 }
 //Funcion pop
 void pop(pila*pla)
 {
 	//Condicion para saber si la pila esta vacia
 	if(tam==0){
     			cout<<"La pila esta vacia";
     			}
	else{
		//Si la pila no esta vacia, entonces hace esto
     	cout << endl << "El elemento de la pila es este : " << tope->info << endl;
     	aux=tope->anterior;
     	elimina=tope;
     	/* hacemos que el nuevo sea ahora el tope */
     	tope=aux;			
     	free(elimina);
     	pla->tamano--;
     				} 				
 }
 
