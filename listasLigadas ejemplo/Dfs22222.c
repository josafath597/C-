#include <iostream>
#include <Stacks.h>
/***********************************/
void inicializa(lista * ls);
int longitud(lista *lst);
int esVacia(lista *lst);
int elemIndice(lista *lst, int indice);
void insertaEn(lista *lst, int elemento, int indice);
void agregaFinal(lista *lst, int elemento);
void borraEn(lista *lst, int indice);
/************************************/
typedef struct _nodo
{
   int valor;
   struct _nodo * siguiente;
} nodo;

typedef struct {
   int tamano;
   nodo * inicial;
} lista;
/************************************/
int main()
{
    int i;
    int j;
    lista lst1,lst2,lst3,lst4,lst5,lst6,lst7,lst8,lst9;
    inicializa(&lst1);
    inicializa(&lst2);
    inicializa(&lst3);
    inicializa(&lst4);
    inicializa(&lst5);
    inicializa(&lst6);
    inicializa(&lst7);
    inicializa(&lst8);
    inicializa(&lst9);
   //agregamos elementos a las listas de adyacencias
   agregaFinal(&lst1, 0);
   agregaFinal(&lst1, 4);
   /*************************************/
   agregaFinal(&lst2, 1);
   agregaFinal(&lst2, 2);
   agregaFinal(&lst2, 3);
   /*************************************/
   agregaFinal(&lst3, 2);
   agregaFinal(&lst3, 3);
   agregaFinal(&lst3, 0);
   /*************************************/
   agregaFinal(&lst4, 3);
   agregaFinal(&lst4, 0);
   agregaFinal(&lst4, 4);
   /*************************************/
   agregaFinal(&lst5, 4);
   agregaFinal(&lst5, 8);
   agregaFinal(&lst5, 5);
   agregaFinal(&lst5, 7);
   agregaFinal(&lst5, 6);
   /*************************************/
   agregaFinal(&lst6, 8);
   /*************************************/
   agregaFinal(&lst7, 5);
   agregaFinal(&lst7, 7);
   /*************************************/
   agregaFinal(&lst8, 6);
   agregaFinal(&lst8, 7);
   /*************************************/
   agregaFinal(&lst9, 7);
   printf("\n");
    printf("Los elementos dentro la lista son:\n");
   for (i=0; i< longitud(&lst1); i++){
      printf("%d\n", elemIndice(&lst1,i));
   }
   printf("Los elementos dentro la lista son:\n");
   for (i=0; i< longitud(&lst2); i++){
      printf("%d\n", elemIndice(&lst2,i));
   }
   printf("Los elementos dentro la lista son:\n");
   for (i=0; i< longitud(&lst3); i++){
      printf("%d\n", elemIndice(&lst3,i));
   }
   printf("Los elementos dentro la lista son:\n");
   for (i=0; i< longitud(&lst4); i++){
      printf("%d\n", elemIndice(&lst4,i));
   }
   printf("Los elementos dentro la lista son:\n");
   for (i=0; i< longitud(&lst5); i++){
      printf("%d\n", elemIndice(&lst5,i));
   }
   printf("Los elementos dentro la lista son:\n");
   for (i=0; i< longitud(&lst6); i++){
      printf("%d\n", elemIndice(&lst7,i));
   }
   printf("Los elementos dentro la lista son:\n");
   for (i=0; i< longitud(&lst7); i++){
      printf("%d\n", elemIndice(&lst7,i));
   }
   printf("Los elementos dentro la lista son:\n");
   for (i=0; i< longitud(&lst8); i++){
      printf("%d\n", elemIndice(&lst8,i));
   }
   printf("Los elementos dentro la lista son:\n");
   for (i=0; i< longitud(&lst9); i++){
      printf("%d\n", elemIndice(&lst9,i));
   }
   return 0;
}
/**************************************************/




// Para inicializar una lista recien creada
void inicializa(lista * ls)
{
   ls-> tamano =0;
   ls-> inicial =NULL;
}

// regresa el numero de elementos de la lista
int longitud(lista *lst)
{
   return lst-> tamano;
}

// regresa 1 si la lista es vacia 0 si no
int esVacia(lista *lst)
{
   if (longitud(lst) == 0)
      return 1;
   else
      return 0;
}

//regresa el elemento en la posicion indice de la lista
int elemIndice(lista *lst, int indice)
{
   int posActual;
   nodo * actual;

   //si el indice no es una posicion valida
   if (indice > longitud(lst)-1 ||
       indice < 0)
   {
      printf("Error, indice fuera de rango.\n");
      return;
   } else {
      //Empezaremos a buscar la posicion desde el nodo inicial
      actual= lst->inicial;
      posActual =0;

      //Mientras no lleguemos a la posicion deseada
      while (posActual != indice)
      {
         //avanzamos al siguiente nodo
         actual = actual->siguiente;
         posActual++;
      }
      return actual-> valor;
   }
}


//inserta un elemento en la posicion indice de la lista
void insertaEn(lista *lst, int elemento, int indice)
{
   int posActual;
   nodo * anterior;
   nodo * nuevo;  //apuntador al nuevo nodo

   //pedimos memoria para el nuevo nodo
   nuevo = malloc(sizeof(nodo));

   // asignamos el valor del nodo nuevo
   nuevo->valor = elemento;

   //si el indice no es una posicion valida
   if (indice > longitud(lst) ||
       indice < 0)
   {
      printf("Error, indice fuera de rango.\n");
      return;
   } else {

      if (indice == 0)
      {
         //hacemos que el siguiente nodo despues del nuevo sea
         //el nodo al inicio de la lista
         nuevo->siguiente = lst->inicial;

         //actualizamos el inicio de la lista
         lst->inicial = nuevo;

      } else {  //si indice no es 0

         //Empezaremos a buscar la posicion desde el nodo inicial
         anterior= lst->inicial;
         posActual =0;

         //Mientras no lleguemos un nodo antes de la posicion deseada
         while (posActual != indice-1)
         {
            //avanzamos al siguiente nodo
            anterior = anterior->siguiente;
            posActual++;
         }

         //el nodo despues del nuevo sera la que antes seguia a
         //la anterior
         nuevo->siguiente = anterior->siguiente;

         //y el nodo siguiente al anterior sera ahora el nuevo
         anterior->siguiente = nuevo;

      } //fin si indice no es 0

      //aumentamos el numero de elementos
      lst->tamano++;
   } //fin else si dan indice adecuado
}

// agrega un elemento al final de la lista
void agregaFinal(lista *lst, int elemento)
{
   //Insertamos elemento en la posicion que corresponde a la
   //longitud de la lista. Recuerda que el maximo indice de la
   //lista es igual a su longitud - 1
   insertaEn(lst, elemento, longitud(lst));
}


//borra el elemento que esta en la posicion indice de la lista
void borraEn(lista *lst, int indice)
{
   int posActual;
   nodo * anterior;
   nodo * borrar; //apuntaremos al nodo que queremos borrar

   //si el indice no es una posicion valida
   if (indice > longitud(lst)-1 ||
       indice < 0)
   {
      printf("Error, indice fuera de rango.\n");
      return;
   } else {

      if (indice == 0)  //queremos borrar el nodo inicial
      {
         //a el nodo que queremos borrar
         borrar =lst->inicial;

         //ahora el inicial sera el que sigue del primero
         lst->inicial = lst->inicial->siguiente;

         //liberamos la memoria del nodo que borramos
         free(borrar);

      } else {
         // si no queremos borrar la primera

         //Empezaremos a buscar la posicion desde el nodo inicial
         anterior= lst->inicial;
         posActual =0;

         //Mientras no lleguemos un nodo antes de la posicion deseada
         while (posActual != indice-1)
         {
            //avanzamos al siguiente nodo
            anterior = anterior->siguiente;
            posActual++;
         }

         //queremos borrar el siguiente de anterior
         borrar = anterior->siguiente;

         //nos saltamos el nodo que queremos borrar
         anterior->siguiente = anterior->siguiente->siguiente;

         //liberamos la memoria del nodo que borramos
         free(borrar);

      } //fin si no queremos borrar la primera

      //reducimos el numero de elementos
      lst->tamano--;
   } //fin else si dan indice adecuado
}
