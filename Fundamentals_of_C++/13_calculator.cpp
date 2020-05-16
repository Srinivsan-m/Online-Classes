#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operation;
    cout << "\t** Calculator **\n**To exit, enter the operation as '0'\n";
    bool loop = true;
    while (loop)
    {
        cout << "\nEnter 1st Number : ";
        cin >> num1;
        cout << "Enter the operation to perform (+ , - , / , * , %) : ";
        cin >> operation;
        cout << "Enter 2nd Number : ";
        cin >> num2;

        switch (operation)
        {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n';
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
            break;
        case '%':
            cout << num1 << " % " << num2 << " = " << (int)num1 % (int)num2 << '\n';
            break;
        case '0':
            cout << "\t** Exiting the Calculator **\n";
            loop = false;
            break;

        default:
            cout << "Invalid Input, please try again.\n\n";
            break;
        }
    }
}