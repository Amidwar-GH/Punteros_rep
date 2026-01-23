#include<iostream>
using namespace std;

struct Tiempo{
    int horas,minutos,segundos;
}tiempo[3], *puntero_tiempo = tiempo;

//Prototipo de funcion
void pedirDatos();
void tiempoTotal(Tiempo *);

int total=0;

int main(){
    pedirDatos();
    tiempoTotal(puntero_tiempo);
    
    system("pause");
    return 0;
}

void pedirDatos(){
    for(int i=0; i<3; i++){
        cout<<"Digite las horas empleadas:\t\t";
        cin>>(puntero_tiempo+i)->horas;
        cout<<"Digite los minutos empleados:\t\t";
        cin>>(puntero_tiempo+i)->minutos;
        cout<<"Digite los segundos empleados:\t\t";
        cin>>(puntero_tiempo+i)->segundos;

        cout<<endl;
    }
}

void tiempoTotal(Tiempo *puntero_tiempo){
    int total=0;
    for(int i=0; i<3; i++){
        total = total + ((puntero_tiempo+i)->horas * 3600);
        total = total + ((puntero_tiempo+i)->minutos * 60);
        total = total + ((puntero_tiempo+i)->segundos);
    }

    cout<<".: El ciclista empleo en total: "<<total<<", de las 3 etapas:."<<endl;
}







