//Punteros a estructuras

#include<iostream>
using namespace std;

struct Persona{
    char nombre[30];
    int edad;
}persona, *puntero_persona = &persona;

void pedirDatos(); //Prototipo de funcion


int main(){
    pedirDatos();

    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Digite su nombre: ";
    cin.getline(puntero_persona->nombre,30,'\n');
    cout<<"Digite su edad: ";
    cin>>puntero_persona->edad;
}