#include <iostream>
using namespace std;

int main() {
    int num, *dir_num; 
    
	num = 320;
	dir_num = &num;

    cout << "Numero: " << num << endl;
    cout << "Direccion de memoria: " << &num << endl;
    cout << "Numero con puntero: " << *dir_num << endl;
    cout << "Posicion de memoria: " << dir_num << endl;

    return 0;
}
