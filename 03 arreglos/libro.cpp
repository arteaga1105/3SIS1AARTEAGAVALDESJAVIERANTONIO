
#include <iostream>

#include <string>

using namespace std;

int main(){
	string titulos[5];
	string autores[5];
	
	cout<<"Por favor ingrese la sig. información";
	
	for(int i=0; i < 5 ; i++){
		cout<<"\n Datos del libro : "<< i + 1 <<" \n";
		cout<<"Título: ";
		
		getline(cin, titulos[i]);
		cout<<"Autor: ";
		
		getline(cin, autores[i]);
		
}
}
