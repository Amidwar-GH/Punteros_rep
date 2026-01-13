/*Hacer una funcion para almacenar N numeros en un arreglo dinamico, posteriormente
en otra funcion buscar un numero en particular.*/

//Nota: Puedes utilizar cualquier metodos de busqueda

#include<iostream>
#include<stdlib.h>

using namespace std;

//Prototipos de funcion
void pedirDatos();
void buscar(int *, int, int);

int nElementos, *elemento, search;

int main(){
    pedirDatos();
    buscar(elemento,nElementos,search);

    delete[] elemento;
    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Digite el numero de elementos del arreglo\n";
    cin>>nElementos;

    elemento = new int[nElementos];

    for(int i=0; i<nElementos; i++){
        cout<<"Numero ["<<i<<"]: ";
        cin>>*(elemento+i);
    }

    cout<<"Digite el numero a buscar: ";
    cin>>search;
}

void buscar(int *elemento, int nElementos, int search){
    int encontrado,pos;
    bool bandera=false;
    for(int i=0; i<nElementos; i++){
        if(*(elemento+i)==search){
            pos=i;
            encontrado=*(elemento+i);
            bandera=true;
        }
    }
    if(bandera){
        cout<<"El numero buscado es: "<<encontrado<<endl;
        cout<<"Posicion deL arreglo: "<<pos<<endl;
    }else{
        cout<<"El numero no se encuentra en el arreglo."<<endl;
    }
}