/*Matrices dinámicas 

Ejemplo: rellenar una matriz de NxM y mostrar su contenido 

**puntero_matriz -> *puntero_fila   ->  [int] [int] [int]
                    *puntero_fila   ->  [int] [int] [int]
                    *puntero_fila   ->  [int] [int] [int]
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos(); //Prototipo de funcion
void mostrarMatriz(int **,int,int);

int **puntero_matriz;
int nFilas, nCol;


int main(){
    pedirDatos();
    mostrarMatriz(puntero_matriz, nFilas, nCol);

    //Liberando memoria que se uso en la matriz
    for(int i=0; i<nFilas; i++){
        delete[]puntero_matriz[i];
    }
    delete[]puntero_matriz;

    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Digie el numero de filas: ";
    cin>>nFilas;
    cout<<"Digite el numero de columnas: ";
    cin>>nCol;

    //Reservar memoria para la matriz dinamica
    puntero_matriz = new int *[nFilas]; //Reservando memoria para las filas

    for(int i=0; i<nFilas; i++){
        puntero_matriz[i] = new int[nCol]; //Reservando memoria para las columnas;
    }

    cout<<"\nDigitando los elementos de la matriz: \n";
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nCol; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matriz+i)+j); // --> puntero_matriz[i][j]
        }
    }
}

void mostrarMatriz(int **puntero_matriz,int nFilas, int nCol){
    cout<<"\n\nImprimiendo matriz\n";
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nCol; j++){
            cout << *(*(puntero_matriz + i) + j) << " "; //puntero_matriz[i][j]
        }
        cout<<endl;
    }
}