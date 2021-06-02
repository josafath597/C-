#include<iostream> 
#include<stdlib.h> 
using namespace std; 
   
 //******************************* 
 struct nodo{ 
     int info; 
     struct nodo *siguiente; 
 }; 
 //************************************ 
 main(){ 
     struct nodo *ultimo;  //este puntero es para el último elemento de la lista. 
     struct nodo *primero;  //este puntero es para el primer elemento de la lista. 
     struct nodo *nuevo;  // puntero para almacenar el nodo que se va a insertar 
      
       
     ultimo=NULL; 
     primero=NULL; 
       
     int dato; 
     int cant, i=1; 
     int tam=0;  
     cout<<"Ingrese cantidad de nodos="; 
     cin>>cant;  
     while(i<=cant){ 
             nuevo=(struct nodo *)malloc(sizeof(struct nodo));   // crear nodo nuevo asignando memoria dinamicamente en tiempo de ejecución. 
             nuevo->siguiente=NULL;  // Nuevo apuntara a NULL ya que será eñ ultimo elemento de la lista 
             // Ingresan datos del nodo 
             cout<<"Entre dato "<<i<<": "; 
             cin>>dato; 
             nuevo->info=dato; 
                          
                          
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
           /* hacemos que el nuevo sea ahora el último */
           ultimo = nuevo; 
      }                       
           i++;
		   tam=tam+1-; 
     } 
  
// Impresión de elementos de la lista 
    struct nodo *aux;  //este puntero es para recorrer la lista. 
     aux=primero; 
     while(aux!=NULL){ 
         cout<<endl<<"Dato de la lista="<<aux->info; 
         aux=aux->siguiente;    // siguiente elemento de la lista 
     }      
     cout << endl; 
     cout << endl << endl;
     cout << "Menu" << endl;
     cout << "1.Insertar datos despues de un elemento de la lista" << endl;
     cout << "2.Eliminar elemento de la lista" << endl;
     int menu;
     cin >> menu;
     switch(menu)
     {
     	case 1:
     		{
     		nuevo=(struct nodo *)malloc(sizeof(struct nodo));   // crear nodo nuevo asignando memoria dinamicamente en tiempo de ejecución.              
            nuevo->siguiente=NULL;
            cout<<"Entre dato: "; 
            cin>>dato; 
            nuevo->info=dato;
			nuevo->siguiente=NULL;
			ultimo->siguiente=nuevo;
			ultimo=nuevo;
			break;
		}
		case 2:
			{
		    nuevo=(struct nodo *)malloc(sizeof(struct nodo));   // crear nodo nuevo asignando memoria dinamicamente en tiempo de ejecución.              
            nuevo->siguiente=NULL;
            cout<<"Entre dato: "; 
            cin>>dato; 
            nuevo->info=dato;
            nuevo->siguiente=primero;
			primero=nuevo;
			break;
			}
		case 3:
			{
			
			nuevo=(struct nodo *)malloc(sizeof(struct nodo));   // crear nodo nuevo asignando memoria dinamicamente en tiempo de ejecución.              
            nuevo->siguiente=NULL;
            cout<<"Entre dato:  "; 
            cin>>dato; 
            nuevo->info=dato;
            cout << "En que posicion lo quieres?" << endl;
            int pos;
            cin >> pos;
            struct nodo *aux3;  //este puntero es para recorrer la lista. 
            aux3=primero; 
            for(int r=1;r<pos;r++)
            {
            	aux3=aux3->siguiente;
            }
            nuevo->siguiente=aux3->siguiente;
            aux3->siguiente=nuevo;
            break;
        }
        case 4:
        	{
        		cout << "Que puntero deseas eliminar: " << endl;
     			int pos;
				 cin >> pos;
				 struct nodo *aux4;
				 struct nodo *elimina;
				 elimina=primero;
     			aux4=primero;
     			for(int i=1;i<pos;i++)
     			{
     				elimina=elimina->siguiente;
     				aux4=aux4->siguiente;
     			}
     			
        	}
            
            
     }
     struct nodo *aux2;  //este puntero es para recorrer la lista. 
     aux2=primero; 
     while(aux2!=NULL){ 
         cout<<endl<<"Dato de la lista="<<aux2->info; 
         aux2=aux2->siguiente;    // siguiente elemento de la lista 
     }      
     cout << endl << endl;
     system("pause"); 
 } 
