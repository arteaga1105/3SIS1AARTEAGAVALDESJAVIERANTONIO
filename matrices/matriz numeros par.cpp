#include <iostream>

using namespace std;


int main() {
    int filas, columnas;
    std::cout<<"Ingrese el numero de filas: ";
    std::cin>>filas;
    std::cout<<"Ingrese el numero de columnas: ";
    std::cin>>columnas;

    int** matriz = new int*[filas];

    for (int i = 0; i < filas; ++i) {
        matriz[i]= new int[columnas];
    }

    int numero=2;  
    for(int i=0; i<filas;++i){
        for(int j=0; j<columnas;++j){
        matriz[i][j]=numero;
        numero+=2;
        }
    }
    std::cout<<"matriz generada \n";
    for(int i=0;i<filas;++i){
        for(int j=0;j<columnas;++j){
            std::cout<<matriz[i][j]<<"\t";
        }
    std::cout<<"\n";
    }
    for(int i=0;i<filas;++i){
        delete[]matriz[i];
    }
    delete[]matriz;
    return 0;
}