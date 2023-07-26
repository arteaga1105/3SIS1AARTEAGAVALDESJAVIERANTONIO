#include <iostream>

void GenerarMatrizAleatoria() {
    int matriz[5][6];
    
    for (int fila = 0; fila < 5; fila++) {
        for (int columna = 0; columna < 6; columna++) {
            matriz[fila][columna] = rand() % 100 + 1; 
        }
    }
    
    
    for (int fila = 0; fila < 5; fila++) {
        for (int columna = 0; columna < 6; columna++) {
            std::cout << matriz[fila][columna] << "   ";
        }
        std::cout << std::endl;
    }
}

int main() {
    GenerarMatrizAleatoria();
    return 0;
}
