#include <stdio.h>
#include <stdlib.h>
#include <libreria.h>

void iniciliza(pila *pl)
{
	pl->tamano=0;
	pl->inicial=NULL;
}

int tam(pila*pla)
{
	return pla->tamano;
}
