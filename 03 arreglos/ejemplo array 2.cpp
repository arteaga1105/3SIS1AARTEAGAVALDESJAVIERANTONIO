
#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	float notas[20];
	
	
	int i=0;
	
	float suma=0;
	
	float media;
	
	//entrada de los datos
	for (i=0; i<20; i++){
		
		cout<<"alumno : "<<i+1<< "nota final : \n";
		
		cin>>notas[i];
	}
	//vamos a sumarlas
	for(i=0;i<20;i++){
		
		suma=suma+notas[1];
	}
	//promedio
	media=suma/20;
	
	//mostramos los datos
	cout<<fixed<<setprecision(2);
	
	cout<<endl<<"nota promedio del curso : "<<media<<endl;
	
	//quiero mostrar los valores superiores
	//a la media
	cout<<"alumnos superiores al promedio :\n";
	
	for(i=0;i<20;i++){
		
		if(notas[i]>media){
			
			cout<<"id alumno : "<<i+1<<endl;
			
			cout<<"nota final : "<<notas[i]<<endl;
		}
	}
	
}
