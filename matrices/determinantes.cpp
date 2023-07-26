#include <iostream>
using namespace std;

int main() {
    int a;
    float x1, y1, r1, x2, y2, r2, x, u, r, resultado1, resultado2;
    float b, c, d, e, f, g, h, i, j, k, l;
    float X, U, Z, SX, SU, SZ, determinanteR, X2, U2, Z2, SX2, SU2, SZ2, determinanteX;
    float X3, U3, Z3, SX3, SU3, SZ3, determinanteY, X4, U4, Z4, SX4, SU4, SZ4, determinanteZ;
    float x, u, z;
    int ñ;

    do {
        system("clear");

        cout << "_-_-_-ELIJA UNA OPCION-_-_-"<< endl;
        cout << "1. Determinante de 2x2" << endl;
        cout << "2. Determinante de 3x3" << endl;
        cin >> a;

        switch (a) {
            case 1:
                cout << "Ingrese los valores" << endl;
                cout << "Valor 1: ";
                cin >> x1;
                cout << "Valor 2: ";
                cin >> y1;
                cout << "Valor 3: ";
                cin >> r1;
                cout << "Ingrese los valores de la segunda expresion" << endl;
                cout << "Valor 1: ";
                cin >> x2;
                cout << "Valor 2: ";
                cin >> y2;
                cout << "Valor 3: ";
                cin >> r2;

                x = (x1 * r2) - (x2 * r1);
                u = (y1 * r2) - (y2 * r1);
                r = (x1 * y2) - (x2 * y1);

                resultado1 = x / r;
                resultado2 = u / r;

                cout << "El valor de x es: " << resultado1 << " y el valor de y es: " << resultado2 << endl;
                break;
            
            case 2:
                cout << "Ingrese los valores de la primera fila" << endl;
                cout << "Valor 1: ";
                cin >> a;
                cout << "Valor 2: ";
                cin >> b;
                cout << "Valor 3: ";
                cin >> c;
                cout << "Valor 4: ";
                cin >> d;
                cout << "Ingrese los valores de la segunda fila" << endl;
                cout << "Valor 1: ";
                cin >> e;
                cout << "Valor 2: ";
                cin >> f;
                cout << "Valor 3: ";
                cin >> g;
                cout << "Valor 4: ";
                cin >> h;
                cout << "Ingrese los valores de la tercera fila" << endl;
                cout << "Valor 1: ";
                cin >> i;
                cout << "Valor 2: ";
                cin >> j;
                cout << "Valor 3: ";
                cin >> k;
                cout << "Valor 4: ";
                cin >> l;

                // primera multiplicacion
                X = (a * f * k);
                U = (e * j * c);
                Z = (i * b * g);
                // segunda multiplicacion
                SX = (c * f * i);
                SU = (g * j * a);
                SZ = (k * b * e);

                determinanteR = X + U + Z - (SX + SU + SZ);

                // =================================

                // primera multiplicacion
                X2 = (d * f * k);
                U2 = (h * j * c);
                Z2 = (l * b * g);
                // segunda multiplicacion
                SX2 = (c * f * l);
                SU2 = (g * j * d);
                SZ2 = (k * b * h);

                determinanteX = X2 + U2 + Z2 - (SX2 + SU2 + SZ2);
                // ====================================

                // primera multiplicacion
                X3 = (a * h * k);
                U3 = (e * l * c);
                Z3 = (i * d * g);

                // segunda multiplicacion
                SX3 = (c * h * i);
                SU3 = (g * l * a);
                SZ3 = (k * d * e);

                determinanteY = X3 + U3 + Z3 - (SX3 + SU3 + SZ3);

                // ========================================

                // primera multiplicacion
                X4 = (a * f * l);
                U4 = (e * j * d);
                Z4 = (i * b * h);
                // segunda multiplicacion
                SX4 = (d * f * i);
                SU4 = (h * j * a);
                SZ4 = (l * b * e);

                determinanteZ = X4 + U4 + Z4 - (SX4 + SU4 + SZ4);

                // ================================

                x = determinanteX / determinanteR;
                u = determinanteY / determinanteR;
                z = determinanteZ / determinanteR;

                cout << "El valor de x es: " << x << endl;
                cout << "El valor de y es: " << u << endl;
                cout << "El valor de z es: " << z << endl;

                break;
        }

        cout << "¿Desea reiniciar el programa? Si (1), No (2)" << endl;
        cin >> ñ;

    } while (ñ == 1);

    return 0;
}
