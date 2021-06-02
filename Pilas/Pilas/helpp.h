 #include<iostream>
 #include<stdlib.h>
 using namespace std;
struct nodo{
     int info;
     struct nodo *siguiente;
     struct nodo *anterior;
 };
 struct nodo *tope;  //este puntero es para el último elemento de la pila.
 struct nodo *nuevo; // puntero para almacenar el nodo que se va a insertar 
 struct nodo *aux;   
 struct nodo *elimina; // puntero para almacenar el nodo que se va a insertar
 int dato;
 int cant, i=1;
 int menu;
 int tam=0;
 /************************************************************/
 //Funcion pop
 void pop()
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
     	tam;
     				}
     				
 }
 //Funcion push
 void push(int elem)
 {
 	
 	nuevo=(struct nodo *)malloc(sizeof(struct nodo));   // crear nodo nuevo asignando memoria dinamicamente en tiempo de ejecución.
             nuevo->siguiente=NULL; 
             nuevo->anterior=NULL;
             nuevo->info=elem;
             // El nuevo elemento lo situamos al final de la pila 
     // comprobamos si la pila está vacía. si tope==NULL es que no hay ningún elemento en la pila./
      if (tope==NULL) {
      	// Es el primero elemento de la pila 
          tope = nuevo;
         }
      else {
      	/* el que hasta ahora era el tope tiene que apuntar al nuevo */ 
           tope->siguiente = nuevo;
           nuevo->anterior= tope;
           /* hacemos que el nuevo sea ahora el tope */
           tope=nuevo;
      }                      
           tam=tam+1;
 }
 int topee()
 {
 	int y;
 	y=tope->info;
 	return y;
 }
 int esvacia()
 {
 	if(tam==0)
 	{
 		cout << endl << "La lista esta vacia" << endl;
 		return -1;
 	}

 }
