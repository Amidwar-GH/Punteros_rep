#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void transpuesta(int **, int **, int, int);


int **puntero_matriz1, **puntero_matriz2, nFilas,nCol;

int main(){
    pedirDatos();

    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Digite el numero de filas: ";
    cin>>nFilas;
    cout<<"Digite el numero de columnas: ";
    cin>>nCol;

    //Reservando memoria para la primera matriz
    puntero_matriz1 = new int *[nFilas]; //Reservando memoria para las filas
    for(int i=0; i<nFilas; i++){
        puntero_matriz1[i] = new int[nCol]; //Reservando memoria para las columnas
    }

    cout<<"Digite lo elementos de la matriz: \n";
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nCol; j++){
            cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matriz1+i)+j);
        }
    }

    //Reservando memorira para la segunda matriz
    puntero_matriz2 = new int*[nFilas]; //Reservando memoria para las filas
    for(int i=0; i<nFilas; i++){
        puntero_matriz2[i] = new int[nCol];
    }

}


