#include <iostream>
#include <stdlib.h>
#include <Stacks.h>
using namespace std;
int main()
{
	int x;//f
	int y;//c
	int a=0,b=1,c=2,d=3,e=4,f=5,g=6,h=7,i=8;
	int fila=9;
	int columna=9;
	int matriz[fila-1][columna-1];
        for (int x=0;x<=fila-1;x++) {
            for (int y=0;y<=columna-1;y++) {
                matriz[x][y]=0;
                cout << matriz[x][y]<<" ";
            }
                cout <<"\n";

        }
    //matriz[0][2]=1;matriz[0][3]=1;matriz[0][4]=1;
    //matriz[1][2]=1;matriz[1][3]=1;
    //matriz[2][0]=1;matriz[2][1]=1;matriz[2][3]=1;
    //matriz[3][0]=1;matriz[3][1]=1;matriz[3][2]=1;matriz[3][4]=1;
    //matriz[4][0]=1;matriz[4][3]=1;matriz[4][5]=1;matriz[4][6]=1;matriz[4][8]=1;
    //matriz[5][4]=1;matriz[5][7]=1;
    //matriz[6][4]=1;matriz[6][7]=1;
    //matriz[7][4]=1;matriz[7][5]=1;matriz[7][6]=1;
    matriz[i][e]=1;
    cout << endl << endl;
     
	 for (int x=0;x<=fila-1;x++) {
            for (int y=0;y<=columna-1;y++) {
                cout << matriz[x][y]<<" ";
            }

                cout <<"\n";

        }
	return 0;
}
