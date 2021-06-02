#include <iostream>
#include <stdlib.h>
#include "Stacks.h"
using namespace std;
int vistos[9];
int padre[9];
int matriz[9][9];
pila pla;
int u;

void visita(int ver)
{
    push(&pla,ver);
    while(esVacia(&pla)==0)
    {
        u=topee(&pla);
        pop(&pla);
        if(vistos[u]==0)
        {
            vistos[u]=1;
        }
        for(int t =0; t<9; t++)
            {
                if(matriz[u][t]==1)
                {
                    if(vistos[t]!=1)
                    {
                        push(&pla,t);
                        padre[t]=u;
                    }
                }
            }

    }

}
int main()
{
	int x;//f
	int y;//c
	int fila=9;
	int columna=9;

        for (int x=0;x<=fila-1;x++) {
            for (int y=0;y<=columna-1;y++) {
                matriz[x][y]=0;
                cout << matriz[x][y]<<" ";
            }

                cout <<"\n";

        }
    matriz[0][2]=1;matriz[0][3]=1;
    matriz[1][2]=1;matriz[1][3]=1;
    matriz[2][0]=1;matriz[2][1]=1;matriz[2][3]=1;
    matriz[3][0]=1;matriz[3][1]=1;matriz[3][2]=1;matriz[3][4]=1;
    matriz[4][0]=1;matriz[4][3]=1;matriz[4][5]=1;matriz[4][6]=1;matriz[4][8]=1;
    matriz[5][4]=1;matriz[5][7]=1;
    matriz[6][4]=1;matriz[6][7]=1;
    matriz[7][4]=1;matriz[7][5]=1;matriz[7][6]=1;
    matriz[8][4]=1;
    cout << endl << endl;

	 for (int x=0;x<=fila-1;x++) {
            for (int y=0;y<=columna-1;y++) {
                cout << matriz[x][y]<<" ";
            }

                cout <<"\n";

        }

    visita(0);
    for(int i = 0; i < 9; ++i){
        cout << "padre i: " << i << " es " << padre[i] << '\n';
    }
    //int padre[9];

	return 0;
}
