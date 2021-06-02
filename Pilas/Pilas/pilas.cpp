 #include<iostream>
 #include<stdlib.h>
 #include<helpp.h>
 using namespace std;
 
 //*******************************
 
 //************************************
 main(){
 	 int retorno;
     tope=NULL;
     cout<<"Ingrese cantidad de nodos=";
     cin>>cant; 
     while(i<=cant){
     	// Ingresan datos del nodo 
             cout << " Dame dato : ";
             cin >> dato;
             push(dato);
             i++;
     }
     cout << endl << "El elemento de la pila es este : " << topee() << endl;
     system("pause");
     
     do{
     	//Aplicamos un menú con do-while para poder repetir el ciclo en caso de que queramos
     	system("cls");
     	cout << endl << endl << "Menu" << endl;
     	cout << "1.Push(elem) Coloca el nuevo elemento elem en el tope de la pila" << endl;
     	cout << "2.pop() Elimina la celda que se encuentra en el tope de la pila" << endl;
	 	cout << "        y actualiza el tope (no regresa nada)" << endl;
	 	cout << "3.Mostrar el primer elemento que se inserto ten en cuenta" << endl;
	 	cout << "  que esto borrara los elemento que esten por arriba de la pila"<< endl;
	 	cout << "4.Salir" << endl;
     	cin >> menu;
     	switch(menu)
     	{
     		case 1:
     			{
     				cout << "Dame el dato" << endl;
     				cin >>dato;
     			    push(dato);
     			    cout << endl << "El elemento de la pila es este : " << tope->info << endl;
     			    system("pause");
					break;
     			}
     		case 2:
     			{
     			 pop();
     			 system("pause");
     				break;
     			}
     		case 3:
     			{
     				//recorre todos los elementos de la pila eliminándolos uno por uno 
     				do
     				{
     				pop();
     				retorno=esvacia(); 
     				}while(retorno != -1);

     				system("pause");
     				break;
     			}
     				case 4:
     					break;
     			default:
     				{
						cout << "Esta opcion no es valida escoje otra jeje" << endl;
						system("pause");
						break; 	
					}		
     	}
	}while(menu !=4);
	 cout << endl;
     system("pause");
     return 0;
 }
 
 
