/*EJERCICIO 1: Comprobar si un numero es par o impar, y señalar la posicion de memoria donde
se esta guardando el numero. Con puneros*/

#include<iostream>
using namespace std;

int main(){
	int num, *dir_numero;
	cout << "Digite un numero para saber si es par o impar: ";
	cin>>num;
	
	dir_numero=&num; //Guardando la posicion de memoria

	if(*dir_numero%2==0){
		cout<<"El numero: "<<*dir_numero<<" es par"<<endl;
		cout<<"Posicion: "<<dir_numero<<endl;
	}else{
		cout<<"El numero: "<<*dir_numero<<" es impar"<<endl;
		cout<<"Posicion: "<<dir_numero<<endl;
	}
	
	
	return 0;
}