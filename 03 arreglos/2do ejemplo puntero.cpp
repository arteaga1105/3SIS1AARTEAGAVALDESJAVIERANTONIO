#include <iostream>

using namespace std;

//vamos acrear una funcion para operacion

void funcion(int * x){
	
	*x = 15;
	return;
}


int main(){
	
int a = 2;

funcion(&a);	

cout << a << endl;

return 0;
	
	
}
