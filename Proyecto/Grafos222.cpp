#include<iostream>
#include<conio.h>
#include <stdlib.h>
#include <Stacks.h>
using namespace std;

struct nodoo{
            int nombre;//nombre del vertice o nodo
            struct nodoo *sgte;
            struct arista *ady;//puntero hacia la primera arista del nodo
            };
struct arista{
              struct nodoo *destino;//puntero al nodo de llegada
              struct arista *sgte;
              };
typedef struct nodoo *Tnodo;//  Tipo Nodo
typedef struct arista *Tarista; //Tipo Arista

Tnodo p;//puntero cabeza
/*******************************************************/
void insertar_nodo(int d);
void agrega_arista(Tnodo &, Tnodo &, Tarista &);
void insertar_arista(int s,int e);
void mostrar_grafo();
void inicializar();
/**********************************************/
/*            Funcion Principal                */
int main()
{
	p=NULL;
	insertar_nodo(0);
	insertar_nodo(1);
	insertar_nodo(2);
	insertar_nodo(3);
	insertar_nodo(4);
	insertar_nodo(8);
	insertar_nodo(5);
	insertar_nodo(6);
	insertar_nodo(7);
	insertar_arista(1,2);
	insertar_arista(1,3);
	insertar_arista(2,3);
	insertar_arista(2,0);
	insertar_arista(3,0);
	insertar_arista(3,4);
	insertar_arista(0,4);
	insertar_arista(4,8);
	insertar_arista(4,5);
	insertar_arista(4,7);
	insertar_arista(4,6);
	insertar_arista(5,7);
	insertar_arista(6,7);
	mostrar_grafo();
}
/**************************************/
/*              Dfs                   */
void Dfs(Tnodo p)
{
	int visitados[8];
	int Padres[8];
	int u;
	pila pla;
	inicializa(&pla);
	push(&pla,p->nombre);
	while(esVacia(&pla)==1)
	{
		u=topee(&pla);
		pop(&pla);
		if(visitados[u]==0)
		{
			visitados[u]=1;
			while(p->ady==NULL)
			{
				if()
				push(&pla,)
			}
		}
	}
}

/*                      INSERTAR NODO AL GRAFO
---------------------------------------------------------------------*/
void insertar_nodo(int d)
{
    Tnodo t,nuevo=new struct nodoo;  
    nuevo->nombre=d;
    nuevo->sgte = NULL;
    nuevo->ady=NULL;

    if(p==NULL)
     {
        p = nuevo;
      }
    else
     {
        t = p;
        while(t->sgte!=NULL)
         {
            t = t->sgte;
          }
        t->sgte = nuevo;
      }
 }
 
 /*                      AGREGAR ARISTA
    funcion que utilizada para agregar la arista a dos nodos
---------------------------------------------------------------------*/
 void agrega_arista(Tnodo &aux, Tnodo &aux2, Tarista &nuevo)
{
    Tarista q;
    if(aux->ady==NULL)
    {   aux->ady=nuevo;
        nuevo->destino=aux2;
    }
    else
    {   q=aux->ady;
        while(q->sgte!=NULL)
            q=q->sgte;
        nuevo->destino=aux2;
        q->sgte=nuevo;
    }

}
/*                      INSERTAR ARISTA
    funcion que busca las posiciones de memoria de los nodos
    y hace llamado a agregar_arista para insertar la arista
---------------------------------------------------------------------*/
void insertar_arista(int s,int e)
{   
	char ini, fin;
    Tarista nuevo=new struct arista;
    Tnodo aux, aux2;

    if(p==NULL)
     {
         return;
     }
    nuevo->sgte=NULL;
    ini=s; 
    fin=e;
    aux=p;
    aux2=p;
    while(aux2!=NULL)
    {
        if(aux2->nombre==fin)
        {
            break;
        }

        aux2=aux2->sgte;
    }
    while(aux!=NULL)
    {
        if(aux->nombre==ini)
        {
            agrega_arista(aux,aux2, nuevo);
            return;
        }

        aux = aux->sgte;
    }
}
/*                      MOSTRAR GRAFO
    funcion que imprime un grafo en su forma enlazada
---------------------------------------------------------------------*/
void mostrar_grafo()
{   Tnodo ptr;
    Tarista ar;
    ptr=p;
    cout<<"NODO|LISTA DE ADYACENCIA\n";

    while(ptr!=NULL)
    {   cout<<"   "<<ptr->nombre<<"|";
        if(ptr->ady!=NULL)
        {
            ar=ptr->ady;
            while(ar!=NULL)
            {   cout<<" "<<ar->destino->nombre;
                ar=ar->sgte;
             }

        }
        ptr=ptr->sgte;
        cout<<endl;
    }
}

