#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "===== Simple Calculator =====" << endl;
    cout << "Enter first operand: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter second operand: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "Result = " << num1 + num2 << endl;
            break;

        case '-':
            cout << "Result = " << num1 - num2 << endl;
            break;

        case '*':
            cout << "Result = " << num1 * num2 << endl;
            break;

        case '/':
            if (num2 == 0)
                cout << "Error: Division by zero is not allowed!" << endl;
            else
                cout << "Result = " << num1 / num2 << endl;
            break;

        case '%':
            if (num2 == 0)
                cout << "Error: Modulo by zero is not allowed!" << endl;
            else
                cout << "Result = " << (int)num1 % (int)num2 << endl;
            break;

        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
