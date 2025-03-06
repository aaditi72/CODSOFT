#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void guessTheNumber() {
    srand(time(0));
    int number = rand() % 100 + 1; // Generates a random number between 1 and 100
    int guess, attempts = 0;
    
    cout << "Guess the number between 1 and 100!" << endl;
    
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        
        if (guess < number) {
            cout << "Too low! Try again." << endl;
        } else if (guess > number) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << number << " in " << attempts << " attempts." << endl;
            break;
        }
    }
}

int main() {
    guessTheNumber();
    return 0;
}

