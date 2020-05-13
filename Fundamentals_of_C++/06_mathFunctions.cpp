#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double num = pow(3, 4);
    cout << "3^4 = " << num << endl;

    int num1 = 83;
    double square_root = sqrt(num1);
    cout << "sqrt of " << num1 << " is " << square_root << endl;

    cout << "cos (60deg) = " << cos(60.0 * (3.14159 / 180)) << endl;

    // for more info refer : http://www.cplusplus.com/reference/cmath/
}