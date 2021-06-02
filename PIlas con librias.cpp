 #include<iostream>
 #include<stdlib.h>
 #include<helppilas.c>
 using namespace std;
 
 int main()
 {
 	int i;
 	int cant;
 	pila p;
 	int dato;
 	
 	inicializa(&p);
 	cout<<"Ingrese cantidad de nodos=";
     cin>>cant; 
     while(i<=cant){
     	// Ingresan datos del nodo 
             cout << " Dame dato : ";
             cin >> dato;
             push(&p,dato);
             i++;
     }
  return 0;
 }
