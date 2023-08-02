#include <iostream>
#include <vector>

#ifdef _WIN32
    #define CLEAR_SCREEN "cls"
#else
    #define CLEAR_SCREEN "clear"
#endif

using namespace std;

const int BOARD_SIZE = 3;


void printBoard(const vector<vector<char>>& board) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == ' ')
                cout << i * BOARD_SIZE + j + 1;
            else
                cout << board[i][j];
            
            if (j < BOARD_SIZE - 1)
                cout << " | ";
        }
        cout << endl;
        
        if (i < BOARD_SIZE - 1)
            cout << "---------" << endl;
    }
}


bool checkWin(const vector<vector<char>>& board, char player) {
    
    for (int i = 0; i < BOARD_SIZE; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }

   
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}


bool checkDraw(const vector<vector<char>>& board) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

int main() {
    char playAgain = 'y';

    cout << "¡Bienvenido al juego del gato!" << endl;

    while (playAgain == 'y' || playAgain == 'Y') {
        vector<vector<char>> board(BOARD_SIZE, vector<char>(BOARD_SIZE, ' '));
        char currentPlayer = 'X';
        int move;

        while (true) {
            system(CLEAR_SCREEN); 

           
            printBoard(board);

           
            cout << "Es el turno del jugador " << currentPlayer << ". Ingresa el numero de la posicion (1-9): ";
            cin >> move;

            
            int row = (move - 1) / BOARD_SIZE;
            int col = (move - 1) % BOARD_SIZE;

            
            if (move < 1 || move > 9 || board[row][col] != ' ') {
                cout << "Movimiento no valido. Intentalo de nuevo." << endl;
            } else {
                
                board[row][col] = currentPlayer;

                
                if (checkWin(board, currentPlayer)) {
                    system(CLEAR_SCREEN); 
                    printBoard(board);
                    cout << "¡El jugador " << currentPlayer << " ha ganado!" << endl;
                    break;
                }

                
                if (checkDraw(board)) {
                    system(CLEAR_SCREEN); 
                    printBoard(board);
                    cout << "¡Es un empate!" << endl;
                    break;
                }

               
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
        }

        
        cout << "¿Quieres volver a jugar? (y/n): ";
        cin >> playAgain;
    }

    cout << "¡Gracias por jugar! ¡Hasta luego!" << endl;
    return 0;
}
