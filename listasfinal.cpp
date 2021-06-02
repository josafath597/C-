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
     int iter=0;  
     int dato; 
     int cant, i=1; 
     int menu;
       
     cout<<"Ingrese cantidad de nodos="; 
     cin>>cant;  
     while(i<=cant){ 
             nuevo=(struct nodo *)malloc(sizeof(struct nodo));   // crear nodo nuevo asignando memoria dinamicamente en tiempo de ejecución. 
             nuevo->siguiente=NULL;  // Nuevo apuntara a NULL ya que será eń ultimo elemento de la lista 
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
		   iter++;
     } 
  
// Impresión de elementos de la lista 
    struct nodo *aux;  //este puntero es para recorrer la lista. 
     aux=primero; 
     while(aux!=NULL){ 
         cout<<endl<<"Dato de la lista="<<aux->info; 
         aux=aux->siguiente;    // siguiente elemento de la lista 
     }      
     cout << endl <<"La longitud de tu nodo es " << iter ;
     cout << endl;
	 do{
	 
     cout << endl << endl;
     system("cls");
     cout << "Menu" << endl;
     cout << "1.Insertar datos al principio de la lista" << endl;
     cout << "2.Insertar datos despues de un elemento de la lista" << endl;
     cout << "3.Eliminar elemento de la lista" << endl;
     cout << "4.Buscan un elemento en la lista";
     cout << "5.Salir" << endl;
     cin >> menu;
     switch(menu)
     {
		case 1:
			{
		    system("cls");
		    nuevo=(struct nodo *)malloc(sizeof(struct nodo));   // crear nodo nuevo asignando memoria dinamicamente en tiempo de ejecución.              
            nuevo->siguiente=NULL;
            cout<<"Entre dato: "; 
            cin>>dato; 
            nuevo->info=dato;
            nuevo->siguiente=primero;
			primero=nuevo;
			break;
			}
		case 2:
			{
			system("cls");
			nuevo=(struct nodo *)malloc(sizeof(struct nodo));   // crear nodo nuevo asignando memoria dinamicamente en tiempo de ejecución.              
            nuevo->siguiente=NULL;
            cout<<"Entre dato:  "; 
            cin>>dato; 
            nuevo->info=dato;
            cout << "En que posicion lo quieres?" << endl;
            int pos;
            cin >> pos;
            if(pos <2 || pos > iter-1)
            {
            	cout << "Posicion no valida" << endl;
            	return 0;
            }
            struct nodo *aux3;  //este puntero es para recorrer la lista. 
            aux3=primero; 
            for(int r=1;r<(pos-1);r++)
            {
            	aux3=aux3->siguiente;
            }
            nuevo->siguiente=aux3->siguiente;
            aux3->siguiente=nuevo;
            break;
        }
        case 3:
        	{
        		system("cls");
        		cout << "Que puntero deseas eliminar: " << endl;
     			int pos;
     			int posactual;
				 cin >> pos;
				 struct nodo *anterior;
				 struct nodo *borrar;
            if(pos <0 || pos > iter)
            {
            	cout << "Posicion no valida" << endl;
            	return 0;
            }else
            {
            	if(pos==0)
            	{
            		borrar=primero;
            		primero=primero->siguiente;
            		free(borrar);
            	}
            	else
            	{
            		anterior=primero;
            		posactual=1;
            		while(posactual != pos-1)
            		{
            			anterior=anterior->siguiente;
            			posactual++;
            			cout << posactual << endl;
            		}
            		borrar=anterior->siguiente;
            		anterior->siguiente=borrar->siguiente;
            		free(borrar);
            	}
                iter--;	
            }
        	}
        	case 4:
        		{
        			int bu;
        			cout << "Que numero deseas buscar : ";
        			cin >> bu;
        			struct nodo *actual;
        			actual=primero;
        			for(int r=0;r=iter;r++)
        			{
        				if(bu==actual->info)
        				{
        					cout << "El numero esta en la lista" << endl;
        					r=25;
        				}
        				actual=actual->siguiente;
        			}
        		}
        		case 5:
        			{
        				break;
        			}
        	default:
			cout << "Esta opcion no es valida escoje otra jeje" << endl;
			system("pause");
			break; 	
        }
	 struct nodo *aux2;  //este puntero es para recorrer la lista. 
     aux2=primero; 
     while(aux2!=NULL){ 
         cout<<endl<<"Dato de la lista="<<aux2->info; 
         aux2=aux2->siguiente;    // siguiente elemento de la lista 
     }      
     cout << endl << endl;
     cout << endl <<"La longitud de tu nodo es " << iter<< endl << endl;
 }while(menu !=4);
     system("pause"); 
 }
