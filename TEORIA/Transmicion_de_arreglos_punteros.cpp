/*Transmicion de arreglos

Ejemplo: Hallar el maximo elemento de un arreglo. */

#include<iostream>
using namespace std;

int hallarMax(int *, int); //Prototipo de funcion

int main(){
	
	const int nElementos=5;
	int numeros[nElementos]={3,12,5,8,1};
	
	cout << "El mayor numero del arreglo es: "<<hallarMax(numeros, nElementos);
	
	
	return 0;
}

int hallarMax(int *dirVec, int nElementos){
	int max=0;
	
	for(int i=0; i<nElementos; i++){
		if(*(dirVec+i)>max){
			max = *(dirVec+i);
		}
	}
	
	return max;
}