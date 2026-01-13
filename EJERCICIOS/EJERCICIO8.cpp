/*EJERCICIO 8: Pedir una cadena de caracteres (string) al usuario, e indicar cuantas veces 
aparece la vocal a,e,i,o,u en la cadena de caracteres. 
Nota: usar punteros*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

void pedirDatos(); //Prototipo de funcion
void contabilizador(char *);

char cadena[40];

int main(){
    pedirDatos();
    contabilizador(cadena);

    return 0;
}

void pedirDatos(){
    cout<<"Digite una cadena de texto: "; 
    cin.getline(cadena,40,'\n');

    strupr(cadena); //Transformando a Mayusculas
}

void contabilizador(char *contadorLetra){
    int contA=0;
    int contE=0;
    int contI=0;
    int contO=0;
    int contU=0;
    
    while(*contadorLetra!='\0'){

        switch(*contadorLetra){
            case 'A':{
                contA++;
                break;
            }
            case 'E':{
                contE++;
                break;
            }
            case 'I':{
                contI++;
                break;
            }
            case 'O':{
                contO++;
                break;
            }
            case 'U':{
                contU++;
                break;
            }
        }

        contadorLetra++;
    }

    cout<<"\nVocales en la cadena:\n";
    cout<<"A = "<<contA<<endl;
    cout<<"E = "<<contE<<endl;
    cout<<"I = "<<contI<<endl;
    cout<<"O = "<<contO<<endl;
    cout<<"U = "<<contU<<endl;
}