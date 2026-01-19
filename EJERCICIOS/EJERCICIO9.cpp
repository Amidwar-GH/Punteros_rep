/*EJERCICIO 9: Realice un programa que calcule la suma de dos
matrices dinamicas*/

#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos(); //Prototipos de funcion
void sumarMatrices(int **, int **, int, int);
void mostrarMatriz(int **,int,int);

int **puntero_matriz1, **puntero_matriz2, nFilas, nCol;



int main(){
    pedirDatos();
    sumarMatrices(puntero_matriz1,puntero_matriz2,nFilas,nCol);
    mostrarMatriz(puntero_matriz1,nFilas,nCol);


    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Digite el numero de filas: ";
    cin>>nFilas;
    cout<<"Digite el numero de columnas: ";
    cin>>nCol;

    //Reservando memoria para la primera matriz
    puntero_matriz1 = new int*[nFilas]; //Reservar memoria para las filas
    for(int i=0; i<nFilas; i++){
        puntero_matriz1[i] = new int [nCol]; //Reservar memoria para las columnas
    }

    cout<<"Digite los elementos de la primera matriz: \n";
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nCol; j++){
            cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matriz1+i)+j);
        }
    }

    //Reservando memoria para la segunda matriz
    puntero_matriz2 = new int*[nFilas]; //Reservar memoria para las filas
    for(int i=0; i<nFilas; i++){
        puntero_matriz2[i] = new int [nCol]; //Reservar memoria para las columnas
    }

    cout<<"Digite los elementos de la segunda matriz: \n";
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nCol; j++){
            cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matriz2+i)+j);
        }
    }
}

void sumarMatrices(int **puntero_matriz1, int **puntero_matriz2, int nFilas, int nCol){
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nCol; j++){
            *(*(puntero_matriz1+i)+j)+=*(*(puntero_matriz2+i)+j);
        }
    }
}

void mostrarMatriz(int **puntero_matriz1, int nFilas, int nCol){
    cout<<"La suma de las dos matrice es: "<<endl;
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nCol; j++){
            cout<<*(*(puntero_matriz1+i)+j)<<" ";
        }
        cout<<endl;
    }
}