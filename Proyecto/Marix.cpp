#include<iostream>
#include<conio.h>
#include <stdlib.h>
#include <string.h>
int V=4;
int A=8;
int a[81][81];

int main()
{
  int i,x,y,p;
  char v1,v2;
  // Leer V y A
  memset(a,0,sizeof(a));
  for (i=1; i<=A; i++)
  { 
    scanf("%c %c %d\n",&v1,&v2,&p);
    x=v1-'A'; y=v2-'A';
    a[x][y]=p; a[y][x]=p;
  } 
}
