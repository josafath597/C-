 #include<iostream>
 #include<stdlib.h>
 using namespace std;
 
 //*******************************
 struct nodo{
     char info;
     struct nodo *siguiente;
     struct nodo *anterior;
 };
 struct nodo *tope;  
 struct nodo *nuevo;  
 struct nodo *aux;
 struct nodo *elimina;
 char dato[20];
 int cant, i=1, e=0;
 int menu;
 int tam=0;
 /*************************************************************************************/
 void cpush(char elem){
 nuevo=(struct nodo *)malloc(sizeof(struct nodo));  
             nuevo->siguiente=NULL;  
             nuevo->anterior=NULL;
             nuevo->info=elem;
      if (tope==NULL) {
          tope = nuevo;
         }
      else {
           tope->siguiente = nuevo;
           nuevo->anterior= tope;
           tope=nuevo;
      }                      
           i++;
           tam=tam+1;
           cout << tope->info;
       }
 //************************************
 void pop()
 {
 	if(tam==0){
     			    cout<<"La pila esta vacia";
     			    }
					else{
     				cout << tope->info;
     				aux=tope->anterior;
     				elimina=tope;
     				tope=aux;
     				free(elimina);
     				tam--;
 }
}
 main(){
 	 tope=NULL;
     cout<<"Ingresa la oracion los espacios los pones como guion bajo;" << endl;
//     fflush( stdin );
     cin>>dato;
     for(e=0;e<20;e++)
	 {
             cpush(dato[e]);
     }
     cout << endl << "El elemento de la pila es este : " << tope->info << endl;
     cout << endl;
     while(tope->anterior !=NULL)
//while(vacia()){
     				{
     				pop();	
     				}	
     return 0;
 }