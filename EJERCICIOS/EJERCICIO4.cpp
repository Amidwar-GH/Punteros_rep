/*Ejercicio 4: Rellenar un arreglo con n números, posteriormente utilizando
punteros determinar el menor elemento del arreglo.*/

#include<iostream>
using namespace std;

int main(){
	
	int n, *dir_numeros,menor;
	cout<<"Digite cuantos numeros va tener el arreglo: "; cin>>n;
	int numeros[n];
	
	for(int i=0; i<n; i++){
		cout<<"Digite el numero de la posicion ["<<i<<"]: ";
		cin>>numeros[i];
	}
	
	dir_numeros=numeros;
	menor=numeros[0];
	
	for(int i=0; i<n; i++){
		if(*dir_numeros<menor){
			menor=*dir_numeros;
		}
		dir_numeros++;
	}
	cout<<"El menor numero del arreglo es: "<<menor;
	
	return 0;
}
