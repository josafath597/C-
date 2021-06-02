
typedef struct _nodo{
     int info;
     struct _nodo *siguiente;
     struct _nodo *anterior;
 }nodo;
 
 typedef struct {
   int tamano;
   nodo * topee;
} pila;

 //Para inicializar la pila 
 void inicializa (pila *pla);
 
 // regresa el numero de elementos de la pila, 0 si es vacia
int tam(pila *pla);

// regresa 1 si la pila es vacia 0 si no
int esVacia(pila *pla);

//regresa el elemento que esta en el tope
int tope(pila *pla);

//Inserta un nuevo elemento
void push(pila *pla, int elemento);

//Elimina el elemento de la pila
void pop(pila*pla);
