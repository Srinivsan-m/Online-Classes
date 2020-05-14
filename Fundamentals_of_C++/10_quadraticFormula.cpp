#include <iostream>
#include <math.h>
using namespace std;

void findQuadraticRoots(double a, double b, double c)
{
    cout << "______________________________________________\n\n"
         << a << "x^2 + " << b << "x + " << c << " = 0"
         << "\n\n";
    if (a == 0)
    {
        cout << "The given equation is not a quadratic equation :( \n\n";
        return;
    }

    double D, x1, x2;
    D = b * b - 4 * a * c;

    if (D == 0)
    {
        cout << "Determinant is " << D << ". \tRoots are real and equal\n";
        x1 = -b / (2 * a);
        // x2 = x1;
        cout << "x1 = x2 = " << x1 << endl;
    }
    else if (D > 0)
    {
        cout << "Determinant is " << D << ". \tRoots are real and different\n";
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        cout << "x1 = " << x1 << "\nx2 = " << x2 << endl;
    }
    else //if D < 0
    {
        cout << "Determinant is " << D << ". \tRoots are imaginary\n";
        double real_part = -b / (2 * a);
        double img_part = sqrt(abs(D)) / (2 * a);
        cout << "x1 = " << real_part << " + " << img_part << " i " << endl;
        cout << "x2 = " << real_part << " - " << img_part << " i " << endl;
    }
}

int main()
{
    cout << "\t** Finding the roots of a Quadratic Equation **\n\n";
    cout << "Enter the coefficients a, b, & c : ";
    double a, b, c;
    cin >> a >> b >> c;
    findQuadraticRoots(a, b, c);
    findQuadraticRoots(4, -2, 5);
    findQuadraticRoots(1, 2, 1);
    findQuadraticRoots(5, 2, 1);
}