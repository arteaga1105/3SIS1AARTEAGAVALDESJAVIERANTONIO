#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    float a[3],b[3],c[3],d[3],r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0,r10=0,r11=0,r12=0;
    int i,n;

    

    cout<<"\nIngrese el Tamaño del 1er Vector: "<<endl;
    cin>>a[0]>>a[1]>>a[2];
    cout<<"Ingrese el Tamaño del 2do Vector: "<<endl;
    cin>>b[0]>>b[1]>>b[2];
    cout<<"\nEn que Quiere el Resultado"<<endl;
    cout<<"\n(1) Producto Punto"<<endl;
    cout<<"(2) Producto Cruz"<<endl;
    cin>>n;

    if ( n==1 ){

    

    for(i=0 ; i<3 ; i++){

        r1 = a[0] * b[0];
        r2 = a[0] * b[1];
        r3 = a[0] * b[2];
        r4 = a[1] * b[0];
        r5 = a[1] * b[1];
        r6 = a[1] * b[2];
        r7 = a[2] * b[0];
        r8 = a[2] * b[1];
        r9 = a[2] * b[2];

    }

    cout<<"\nEl Producto Punto es: "<<endl;
    cout<< "\n "<<r1<< " "<<r2<< " "<<r3<<endl;
    cout<< " "<<r4<< " "<<r5<< " "<<r6<<endl;
    cout<< " "<<r7<< " "<<r8<< " "<<r9<<endl;
    
    }
    else if ( n==2 ) {

        for( i=0 ; i<3 ; i++){

            r1 = a[0] * b[0];
            r2 = a[0] * b[1];
            r3 = a[0] * b[2];
            r4 = a[1] * b[0];
            r5 = a[1] * b[1];
            r6 = a[1] * b[2];
            r7 = a[2] * b[0];
            r8 = a[2] * b[1];
            r9 = a[2] * b[2];

            r10 = r1 + r2 + r3;
            r11 = r4 + r5 + r6;
            r12 = r7 + r8 + r8;

        }

        cout<<"\nEl Producto Cruz es: "<<r10<< " "<<r11<< " "<<r12<<endl;

    }
    

    return 0;
}r