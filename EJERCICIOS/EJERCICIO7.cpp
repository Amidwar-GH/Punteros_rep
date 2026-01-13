/*EJERCICIO 7: Pedir su nombre al usuario y devolver el numero de vocales que hay.
Nota: Recuerda usar punteros*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

void pedirDatos();
int contandoVocales(char *);

char nombreUsuario[30];

int main(){

    pedirDatos();
    cout<<"El numero de vocales en el nombre es: "<<contandoVocales(nombreUsuario)<<endl;

    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Digite su nombre: ";
    cin.getline(nombreUsuario,30,'\n');

    strupr(nombreUsuario); //Transformando a Mayuscula el nombre del usuario
    
}

int contandoVocales(char *nombre){
    int cont=0;

    while(*nombre != '\0'){ //Va seguir mientras nombre no sea nulo '\0'
        switch(*nombre){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': cont++;
        }
        nombre++;
    }
    
    return cont;

}