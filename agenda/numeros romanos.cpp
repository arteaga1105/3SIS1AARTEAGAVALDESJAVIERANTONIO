#include<iostream>
#include<map>

using namespace std;

//conversion de numeros romanos.

//metodo= a operaciones


//que se devuelve        que se recibe



int equivalenciaRomano(string [romano]){

//el mapeo es un arreglo
map<char,int>equivalencia;
equivalencia['M']=1000;
equivalencia['D']=500;
equivalencia['C']=100;
equivalencia['L']=50;
equivalencia['X']=10;
equivalencia['V']=5;
equivalencia['I']=1;
int respueta;

int main(){

    cout <<"ingrese el numero"<<endl;
    cin>>romano;
//esto es para determinar si va del lado izquierdo o derecho

for(int i=0;i<romano.length()-1;++i){
if(equivalencia[i]<equivalencia[romano[i+1]])
respuesta-=equivalencia[romano[i]];
else{respuesta=equivalencia[romano[i]];
}
respuesta+=equivalencias[romano[romano.length()-1]];
return respuesta;
}

int main(int argc,char*argv[]){

if(arg!=2){
cout<<"error"<<endl;
}
else{
cout<<"el desimal es"<<equivalenciaRomano(argv[1]);
}
}
}
}