#include <iostream>
#include <Stacks.h>
using namespace std;
int main()
{
	pila p;
	inicializa(&p);
	
	push(&p,15);
	push(&p,4);
	push(&p,5);
	push(&p,3);
	topee(&p);
	pop(&p);
	topee(&p);
	pop(&p);
	topee(&p);
	pop(&p);
	topee(&p);
	pop(&p);
	topee(&p);
	pop(&p);
}

