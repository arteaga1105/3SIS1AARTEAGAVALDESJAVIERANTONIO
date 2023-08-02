/*

Funciones

Las funciones son invocadas desde otras funciones con ecepcion de una funcion global

main()

3 caracteristicas de una funcion

definicion
declaracion
llamada

tipo de nombre funcion (tipo de argumento1, tipo de argumento2, tipo de argumento n){

sentencias
return expresion
}

double calcula_media(double num1, double num2){

double media;

media=(num1 + num2)/2;

retunr media;

}

*/


#include <iostream>

using namespace std;
/*
//funcion

//double calcular_media(double, double);//declaracion

int main(){
	double numero1, numero2;
	
	cout<<"introduzca el primer numero\n";
	cin>>numero1;
    	cout<<"introduzca el segundo numero\n";
	cin>>numero2;
	//invocacion
	double resultado = calcula_media(numero1, numero2);
	cout<<"La media de"<<numero1<< " y " <<numero2<< " es "<<resultado". \n ";
		
}

double calcula_media(double numero1, double numero2){
double media;
media=(numero1 + numero2)/2;
return media;

}*/

//funciones void

/*

void imprime_cadena(string cadena){
	
	cout<<cadena;
	
}

int main(){
	
	string cadena = "Hola";
	imprime_cadena(cadena);
	imprime_cadena(" mundo\n");
}
*/

//funciones sin argumentos

void imprime_mensaje(){
	
	cout<<"este programa es cawai";
	
}

int main(){
	//string cadena="jola";
	
	imprime_mensaje(cadena);
}




















