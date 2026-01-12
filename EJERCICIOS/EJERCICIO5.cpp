/*EJERCICIO 5: Pedir al usuario N numeros, almacenarlos en un arreglo dinámico, posteriormente
ordenar los numeros en orden ascendente y mostrarlos en pantalla. Nota
utilizar cualquier metodo de ordenamiento*/

#include<iostream>
#include<stdlib.h> //new,delete
#include<conio.h>
using namespace std;

void pedirDatos(); //Prototipo de la funcion
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);


int nElementos, *elemento;




int main(){
    pedirDatos();
    ordenarArreglo(elemento, nElementos);
    mostrarArreglo(elemento, nElementos);

    delete[] elemento; //Liberar la memoria utilizada para el arreglo dinamico

    system("pause");
    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Digite el numero de elementos del areglo: ";
    cin>>nElementos;

    elemento = new int [nElementos];

    for(int i=0; i<nElementos; i++){
        cout<<"Numero ["<<i<<"]: ";
        cin>>*(elemento+i); //elemento[i];
    }
}

void ordenarArreglo(int *elemento, int nElementos){
    int aux;

    //Ordenar el arreglo con el metodo de burbuja
    for(int i=0; i<nElementos; i++){
        for(int j=0; j<nElementos-1; j++){
            if(*(elemento+j)>*(elemento+j+1)){
            aux=*(elemento+j);
            *(elemento+j)=*(elemento+j+1);
            *(elemento+j+1)=aux;
            }
        }
    }
}

void mostrarArreglo(int *elemento, int nElementos){
    cout<<"\n\nMostrando arreglo\n\n";
    for(int i=0; i<nElementos; i++){
        cout<<*(elemento+i)<<endl;
    }
}



