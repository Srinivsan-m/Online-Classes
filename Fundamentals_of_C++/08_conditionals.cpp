#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char grade = 'C';

    if (grade == 'A')
    {
        cout << "Excellent!\n";
    }
    else if (grade == 'B')
    {
        cout << "Awesome!\n";
    }
    else if (grade == 'C')
    {
        cout << "Well done\n";
    }
    else if (grade == 'D')
    {
        cout << "You passed\n";
    }
    else if (grade == 'F')
    {
        cout << "Better try again\n";
    }
    else // if condition == False
    {
        cout << "Invalid grade\n";
    }

    // ** Switch Case **//
    switch (grade)
    {
    case 'A':
        cout << "Excellent!\n";
        break;
    case 'B':
        cout << "Awesome!\n";
        break;
    case 'C':
        cout << "Well done\n";
        break;
    case 'D':
        cout << "You passed\n";
        break;
    case 'F':
        cout << "Better try again\n";
        break;
    default:
        cout << "Invalid grade\n";
    }

    //** GoTo Statement **//
    double x;
tryAgain: // this is a statement label
    cout << "Enter a non-negative number : ";
    cin >> x;

    if (x < 0.0)
        goto tryAgain; // this is the goto statement

    cout << "The sqrt of " << x << " is " << sqrt(x) << endl;
}