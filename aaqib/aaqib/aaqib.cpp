// aaqib.cpp : This file contains the 'main' function. Program execution begins and ends there
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result;
    char oper;
    cout << "\t\t\t\t\t\t\t\Calculator\n";
    cout << "Enter the first number:\n";
    cin >> num1;

    cout << "Enter the second number:\n";
    cin >> num2;

    cout << "Enter any operator to perform between these two numbers(+, -, *, /):\n";
    cin >> oper;

    if (oper == '+') {
        result = num1 + num2;
        cout << "Addition of " << num1 << "+" << num2 << " is = " << result << endl;
    }
    else if (oper == '-') {
        result = num1 - num2;
        cout << "Subtraction of " << num1 << "-" << num2 << " is = " << result << endl;
    }
    else if (oper == '*') {
        result = num1 * num2;
        cout << "Multiplication of " << num1 << "*" << num2 << " is = " << result << endl;
    }
    else if (oper == '/') {
            result = num1 / num2;
            cout << "Division of" << num1 << "/" << num2 << " is = " << result << endl;
        }
        
    else {
        cout << "Invalid operation" << endl;
    }

    return 0;
}
