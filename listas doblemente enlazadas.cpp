#include<iostream> 
 #include<stdlib.h>
 using namespace std; 
   
 //******************************* 
 struct nodo{ 
     int matricula;
	 char nombre[30]; 
     struct nodo *anterior;
     struct nodo *siguiente; 
 }; 
 //************************************ 
 int main(){ 
     struct nodo *ultimo;  //este puntero es para el último elemento de la lista. 
     struct nodo *primero;  //este puntero es para el primer elemento de la lista. 
     struct nodo *nuevo;  // puntero para almacenar el nodo que se va a insertar 
     struct nodo *elimina;  // puntero para almacenar el nodo que se va a insertar
     
     ultimo=NULL; 
     primero=NULL; 
     
	 int dato;
	 char letras[30]; 
     int cant, i=1;
     cout<<"Ingrese cantidad de nodos="; 
     cin>>cant;  
     while(i<=cant)
	 {
	 	     nuevo=(struct nodo *)malloc(sizeof(struct nodo));   // crear nodo nuevo asignando memoria dinamicamente en tiempo de ejecución.              
             nuevo->siguiente=NULL;
			 // Ingresan datos del nodo 
             cout<<"Introduzca Matricula y nombre (nombre_apellido) "<<i<<": "<< endl; 
             cin>>nuevo->matricula;
             cin>>nuevo->nombre;
			 //nuevo->matricula=dato;
			 //nuevo->nombre[30]=letras[30]; 
		// El nuevo elemento lo situamos al final de la lista  
     // comprobamos si la lista está vacía. si primero==NULL es que no hay ningún elemento en la lista./ 
      if (primero==NULL) { 
          // Es el primero elemento de la lista 
          primero = nuevo; 
          ultimo = nuevo; 
         } 
      else { 
           /* el que hasta ahora era el último tiene que apuntar al nuevo */ 
           ultimo->siguiente = nuevo;
		   nuevo->anterior= ultimo;
           /* hacemos que el nuevo sea ahora el último */
           ultimo = nuevo; 
      }               
             i++; 
    }
    // Impresión de elementos de la lista 
    struct nodo *aux;  //este puntero es para recorrer la lista. 
     aux=
	 primero; 
     while(aux!=NULL){ 
         cout<<endl<<"Tu matricula es : "<<aux->matricula <<" y tu nombre es: "<<aux->nombre; 
         aux=aux->siguiente;    // siguiente elemento de la lista 
     }
     cout << endl << endl;
     cout << "Menu" << endl;
     cout << "1.Insertar datos al final de la lista" << endl;
     cout << "2.Insertar datos al principio de la lista" << endl;
     cout << "3.Insertar datos antes de un elemento de la lista" << endl;
     cout << "4.Insertar datos despues de un elemento de la lista" << endl;
     cout << "5.Eliminar elemento de la lista" << endl;
     int menu;
     cin >> menu;
     switch(menu)
     {
     	case 1:
     		{
     		 nuevo=(struct nodo *)malloc(sizeof(struct nodo));   // crear nodo nuevo asignando memoria dinamicamente en tiempo de ejecución.              
             nuevo->siguiente=NULL;
			 // Ingresan datos del nodo 
             cout<<"Introduzca Matricula y nombre (nombre_apellido): "<< endl; 
             cin>>nuevo->matricula;
             cin>>nuevo->nombre;
             /* el que hasta ahora era el último tiene que apuntar al nuevo */ 
             nuevo->anterior=ultimo;
             ultimo->siguiente = nuevo; 
             /* hacemos que el nuevo sea ahora el último */
             ultimo = nuevo;
     		}
     	case 2:
     		{
     		 nuevo=(struct nodo *)malloc(sizeof(struct nodo));   // crear nodo nuevo asignando memoria dinamicamente en tiempo de ejecución.              
             nuevo->siguiente=primero;
             nuevo->anterior=NULL;
			 // Ingresan datos del nodo 
             cout<<"Introduzca Matricula y nombre (nombre_apellido): "<< endl; 
             cin>>nuevo->matricula;
             cin>>nuevo->nombre; 
             /* hacemos que el nuevo sea ahora el primero */
             primero = nuevo;
     		}
     	case 3:
     		{
     		 nuevo=(struct nodo *)malloc(sizeof(struct nodo));   // crear nodo nuevo asignando memoria dinamicamente en tiempo de ejecución.              
			 // Ingresan datos del nodo 
             cout<<"Introduzca Matricula y nombre (nombre_apellido): "<< endl; 
             cin>>nuevo->matricula;
             cin>>nuevo->nombre;
             cout << "Antes de que posicion deseas insertar la lista: " << endl;
             int pos;
             aux=primero;
             cin >> pos;
     		 for(int i=2;i<pos;i++)
     		 {
     		 	aux=aux->siguiente;
     		 }
     		 aux->siguiente->anterior=nuevo;
     		 nuevo->siguiente=aux->siguiente;
     		 nuevo->anterior=aux;
     		 aux->siguiente=nuevo;
     		}
     	case 4:
     		{
     		 nuevo=(struct nodo *)malloc(sizeof(struct nodo));   // crear nodo nuevo asignando memoria dinamicamente en tiempo de ejecución.              
			 // Ingresan datos del nodo 
             cout<<"Introduzca Matricula y nombre (nombre_apellido): "<< endl; 
             cin>>nuevo->matricula;
             cin>>nuevo->nombre;
             cout << "Despues de que posicion deseas insertar la lista: " << endl;
             int pos;
             aux=primero;
             cin >> pos;
     		 for(int i=2;i<pos+1;i++)
     		 {
     		 	aux=aux->siguiente;
     		 }
     		 aux->siguiente->anterior=nuevo;
     		 nuevo->siguiente=aux->siguiente;
     		 nuevo->anterior=aux;
     		 aux->siguiente=nuevo;
     		
     		}
     	case 5:
     		{
     		 cout << "Que puntero deseas eliminar: " << endl;
     			int pos;
				 cin >> pos;
				 elimina=primero;
     			aux=primero;
     			for(int i=1;i<pos;i++)
     			{
     				elimina=elimina->siguiente;
     				aux=aux->siguiente;
     			}
     			aux->siguiente=elimina;
     			elimina->siguiente->anterior=aux;
     			elimina->siguiente=aux->siguiente;
     			free (elimina);
     		}
     		
     }
     // Impresión de elementos de la lista 
    struct nodo *aux2;  //este puntero es para recorrer la lista. 
     aux2=primero; 
     while(aux2!=NULL){ 
         cout<<endl<<"Tu matricula es : "<<aux2->matricula <<" y tu nombre es: "<<aux2->nombre; 
         aux2=aux2->siguiente;    // siguiente elemento de la lista 
     }
     
}

       
      
    
