#include <iostream>

using namespace std;

int main(){
	//Defino mi arreglo
	int edades [] = {1, 2, 3, 12, 9, 7, 16, 50, 34, 20, 67, 99};
	
	int limite = (sizeof(edades)/sizeof(edades[0]));
	
	for(int i = 0; i < limite; i++){
		cout<<edades[i]<<endl;
		}
	cout<<limite<<endl;
}
