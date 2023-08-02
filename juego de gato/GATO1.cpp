#include <iostream>
#include <stdio.h>


using namespace std;

//variebles
char gato[3][3];
bool bandera = true;

//vamos a crear funciones

void imprimirgato();
void cambiarturno(char &t);
void introduce(char t, char orden);
short evalua(char t);



int main(){
	//mando a llamar al metodo
	imprimirgato();
	
	//necesitamos saber el turno
	char t = 'X';
	char posicion;
	
	//ciclo de tirada
	while(bandera == true){
		cout<<"Es el turno de : "<<t<<" Introduzca la posicion : ";
		cin>>posicion;
		
		posicion = toupper(posicion);
		introduce(t, posicion);
		//como vanmos en el marcador
		evalua(t);
		//cambiar el turno
		cambiarturno(t);
		//imprimir el gato
		imprimirgato();
		
	}
	system("pause");

	
}

void imprimirgato(){
	cout<<"\n *** GATO *** \n";
	cout<<"\t"<<gato[0][0]" | "<<gato[0][1]<<" | "<<gato[0][2]<< "        a | b | c"<<endl;
	cout<<"\t-----------"<<"\n";
	cout<<"\t"<<gato[1][0]" | "<<gato[1][1]<<" | "<<gato[1][2]<< "        d | e | f"<<endl;
	cout<<"\t-----------"<<"\n";
	cout<<"\t"<<gato[2][0]" | "<<gato[2][1]<<" | "<<gato[2][2]<< "        g | h | i"<<endl;
	cout<<"\n ------------------------------------ \n";
}


void introduce(char t, char orden){
	switch(orden){
		case 'A':
			if(gato[0][0]!='X' && gato[0][0]!='O'){
				gato[0][0] = t;
				//cambiamos el turno
				cambiarturno(t);
			}else{
				cout<<"\n Posicion ocupada \n"; 
			}
			break;
		case 'B':
			if(gato[0][1]!='X' && gato[0][1]!='O'){
				gato[0][1] = t;
				//cambiamos el turno
				cambiarturno(t);
			}else{
				cout<<"\n Posicion ocupada \n"; 
			}
			break;
		case 'C':
			if(gato[0][2]!='X' && gato[0][2]!='O'){
				gato[0][2] = t;
				//cambiamos el turno
				cambiarturno(t);
			}else{
				cout<<"\n Posicion ocupada \n"; 
			}
			break;
		case 'D':
			if(gato[1][0]!='X' && gato[1][0]!='O'){
				gato[1][0] = t;
				//cambiamos el turno
				cambiarturno(t);
			}else{
				cout<<"\n Posicion ocupada \n"; 
			}
			break;
		case 'E':
			if(gato[1][1]!='X' && gato[1][1]!='O'){
				gato[1][1] = t;
				//cambiamos el turno
				cambiarturno(t);
			}else{
				cout<<"\n Posicion ocupada \n"; 
			}
			break;
		case 'F':
			if(gato[1]2]!='X' && gato[1][2]!='O'){
				gato[1][2] = t;
				//cambiamos el turno
				cambiarturno(t);
			}else{
				cout<<"\n Posicion ocupada \n"; 
			}
			break;	
		case 'G':
			if(gato[2][0]!='X' && gato[2][0]!='O'){
				gato[2][0] = t;
				//cambiamos el turno
				cambiarturno(t);
			}else{
				cout<<"\n Posicion ocupada \n"; 
			}
			break;	
		case 'H':
			if(gato[2][1]!='X' && gato[2][1]!='O'){
				gato[2][1] = t;
				//cambiamos el turno
				cambiarturno(t);
			}else{
				cout<<"\n Posicion ocupada \n"; 
			}
			break;
		case 'I':
			if(gato[2][2]!='X' && gato[2][2]!='O'){
				gato[2][2] = t;
				//cambiamos el turno
				cambiarturno(t);
			}else{
				cout<<"\n Posicion ocupada \n"; 
			}
			break;	
		default :
			cout<<"\n Introduzca una posicion valida \n"		
	}
}

void cambiarturno(char &t){
	if(t=='X'){
		t='O';
	}else{
		t='X';
	}
	cout<<t;
}


short evalua(char t){
	cout<<"Turno de: "<<t;
	short px = 0;
	short po = 0;
	short evaluacion = 0;
	
	cout<<"\n[0][i]\n";
	
	for(short i = 0; i<3; i++){
		if(((gato[0][i] == 'X') || gato[0][i] == '\0')&& (gato[1][i] == 'X' || gato[1][i] == '\0') && (gato[2][i] == 'X' || gato[2][i] == '\0')){
			px++;
		}
		if(((gato[0][0] == 'O') || gato[0][1] == 'O' || gato[0][2] == 'O')&& (gato[1][0] == 'O' || gato[1][1] == 'O' || gato[1][2] == 'O') && (gato[2][0] == 'O' || gato[2][1] == '0' || gato[2][2] == 'O')){
			if(((gato[0][i] == 'O') || gato[0][i] == '\0')&& (gato[1][i] == 'O' || gato[1][i] == '\0') && (gato[2][i] == 'O' || gato[2][i] == '\0')){
				po++;
			}else{
				po++;
			}
		}
	}
	cout<<"\n po = "<<po;
	cout<<"\n px = "<<px;
	
	cout<<"\n[i][0]\n";
	
	for(short i = 0; i<3; i++){
		if(((gato[i][0] == 'X') || gato[i][0] == '\0')&& (gato[i][1] == 'X' || gato[i][1] == '\0') && (gato[i][2] == 'X' || gato[i][2] == '\0')){
			px++;
		}
		if(((gato[0][0] == 'O') || gato[0][1] == 'O' || gato[0][2] == 'O')&& (gato[1][0] == 'O' || gato[1][1] == 'O' || gato[1][2] == 'O') && (gato[2][0] == 'O' || gato[2][1] == '0' || gato[2][2] == 'O')){
			if(((gato[i][0] == 'O') || gato[i][0] == '\0')&& (gato[i][1] == 'O' || gato[i][1] == '\0') && (gato[i][2] == 'O' || gato[i][2] == '\0')){
				po++;
			}else{
				po++;
			}
		}
	}
	cout<<"\n po = "<<po;
	cout<<"\n px = "<<px;
	
	//diagonales
	cout<<"\n Diagonal\n";
	
	
	if((gato[0][0] == 'X' || gato[0][0] == '\0')&& (gato[1][1] == 'X' || gato[1][1] == '\0') && (gato[2][2] == 'X' || gato[2][2] == '\0')){
		px++;
	}
	if((gato[0][0] == 'O' || gato[0][1] == 'O' || gato[0][2] == 'O' || gato[1][0] == 'O' || gato[1][1] == 'O' || gato[1][2] == 'O' || gato[2][1] == 'O' || gato[2][2] == 'O')){
		if((gato[0][0] == 'O' || gato[0][0] == '\0') && (gato[1][1] == 'O' || gato[1][1] == '\0') && (gato[2][2] == 'O' || gato[2][2] == '\0')){
			po++;
		}
	}else{
		po++;
	}
	cout<<"\n po = "<<po;
	cout<<"\n px = "<<px;
	
	//diagonal otra
	cout<<"\n Diagonal\n";
	
	
	if((gato[2][0] == 'X' || gato[2][0] == '\0')&& (gato[1][1] == 'X' || gato[1][1] == '\0') && (gato[0][2] == 'X' || gato[0][2] == '\0')){
		px++;
	}
	if((gato[0][0] == 'O' || gato[0][1] == 'O' || gato[0][2] == 'O' || gato[1][0] == 'O' || gato[1][1] == 'O' || gato[1][2] == 'O' || gato[2][1] == 'O' || gato[2][2] == 'O')){
		if((gato[2][0] == 'O' || gato[2][0] == '\0') && (gato[1][1] == 'O' || gato[1][1] == '\0') && (gato[0][2] == 'O' || gato[0][2] == '\0')){
			po++;
		}
	}else{
		po++;
	}
	cout<<"\n po = "<<po;
	cout<<"\n px = "<<px;
	
	if(t == 'X'){
		evaluacion = px-po;
	}else{
		evaluacion = po-px;
	}
	
	cout<<"\n Final: \n";
	cout<<" po = \n"<<po;
	cout<<" px = \n"<<px;
	
	cout<<"\n Resultado : \n "<< evaluacion;
}
