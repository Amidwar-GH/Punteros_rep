/*EJERCICIO 11: Hacer una estructura llamada alumno, en la cual se tendrán los siguiente
campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cual de los 3 tiene el
mejor promedio y posteriormente imprimir los datos del alumno.
Nota: Usar punteros a estructura*/

#include<iostream>
using namespace std;

struct Alumno{
    char nombre[30];
    int edad;
    float promedio;
}alumno[3],*puntero_alumno = alumno; //--> &alumno[0] es lo mismo, estamos pasando la primera posicion del arreglo

void pedirDatos(); //Prototipo de funcion
void calcularMayor(Alumno  *);



int main(){
    pedirDatos();
    calcularMayor(puntero_alumno);
    cout<<endl;

    system("pause");
    return 0;
}

void pedirDatos(){
    for(int i=0; i<3; i++){
        fflush(stdin);
        cout<<"Digite su nombre: ";
        cin.getline((puntero_alumno+i)->nombre,30,'\n');
        cout<<"Digite su edad: ";
        cin>>(puntero_alumno+i)->edad;
        cout<<"Digite el promedio: ";
        cin>>(puntero_alumno+i)->promedio;
        cout<<endl;
    }
}

void calcularMayor(Alumno *puntero_alumno){
    float mayor=0.0;
    int pos=0;

    //Comprobar el mayor promedio
    for(int i=0; i<3; i++){
        if((puntero_alumno+i)->promedio > mayor){
            mayor = (puntero_alumno+i)->promedio;
            pos=i; //Guardar la posicion del mayor elemento
        }
    }

    //Imprimir los datos del mayor promedio
    cout<<"\nEl alumno con mejor promedio es:\n";
    cout<<"Nombre: "<<(puntero_alumno+pos)->nombre<<endl;
    cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
    cout<<"Promedio: "<<(puntero_alumno+pos)->promedio;
}