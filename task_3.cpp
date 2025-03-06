#include <iostream>

using namespace std;

const int SIZE = 3;
char board[SIZE][SIZE] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char currentPlayer = 'X';

void showBoard() {
    cout << "\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << " " << board[i][j] << " ";
            if (j < SIZE - 1) cout << "|";
        }
        cout << "\n";
        if (i < SIZE - 1) cout << "-----------\n";
    }
    cout << "\n";
}

bool checkWin() {
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true;
    return false;
}

bool checkDraw() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') return false;
        }
    }
    return true;
}

void changePlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

bool placeMove(int move) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == (char)(move + '0')) {
                board[i][j] = currentPlayer;
                return true;
            }
        }
    }
    return false;
}

void resetGame() {
    char num = '1';
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = num++;
        }
    }
    currentPlayer = 'X';
}

int main() {
    char playAgain;
    do {
        resetGame();
        while (true) {
            showBoard();
            int move;
            cout << "Player " << currentPlayer << ", enter a number (1-9): ";
            cin >> move;
            if (move < 1 || move > 9 || !placeMove(move)) {
                cout << "Invalid move. Try again.\n";
                continue;
            }
            if (checkWin()) {
                showBoard();
                cout << "Player " << currentPlayer << " wins!\n";
                break;
            }
            if (checkDraw()) {
                showBoard();
                cout << "It's a draw!\n";
                break;
            }
            changePlayer();
        }
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
    
    cout << "Thanks for playing!\n";
    return 0;
}

