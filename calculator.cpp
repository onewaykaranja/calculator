#include <iostream>

using namespace std;

int main() {
    char operatorSymbol;
    double num1, num2, result;
    
    cout << "Hello,Enter an operator (+, -, *, /): ";
    cin >> operatorSymbol;

    cout << "Enter first integer ";
    cin >> num1;
    cout << "Enter second integer ";
    cin >> num2;

    switch (operatorSymbol) {
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
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << " Syntax error." << endl;
            }
            break;
        default:
            cout << "Syntax error." << endl;
            break;
    }

    return 0;
}
