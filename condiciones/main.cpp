#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	//tipos de variables
	int edad;
	//pra que vea el usuario en la pantalla
	cout<<"ingresa tu edad: ";
	//leer
	cin>>edad;
	//condicion si
	if(edad >=18){
		cout<<"es mayor de edad";
	}else{
		cout<<"es menor de edad";
	}
	cout<<"fin programa";
	
	return 0;
}
