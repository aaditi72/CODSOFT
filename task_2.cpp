#include <iostream>

using namespace std;

void calculator() {
    double num1, num2, result;
    char operation;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    switch(operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error: Division by zero is not allowed." << endl;
                return;
            }
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid operator! Please use +, -, *, or /." << endl;
    }
}

int main() {
    calculator();
    return 0;
}

