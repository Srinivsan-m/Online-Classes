#include <iostream>
using namespace std;

int main()
{
    //unary
    int a = 5;
    int b = -3;
    int a1 = -a;
    int a2 = +b;

    //binary arithmatic
    int c1 = a + b;
    int c2 = a - b;
    int c3 = a * b;
    int c4 = a / b;
    float c5 = (float)a / b; //typecasting
    int c6 = a % b;
    cout << c4 << " " << c5 << endl;

    // ASCII codes
    char ch = 'A';
    cout << (int)ch << endl;

    int d1 = a;
    d1 += a; // d1 = d1 + a
    d1 -= a; // d1 = d1 - a
    d1 /= a; // d1 = d1 / a
    d1 *= a; // d1 = d1 * a
    d1 %= a; // d1 = d1 % a

    int z = 4;
    ++z; // Pre-Increment
    z++; // Post-Increment
    --z; // Pre-Decrement
    z--; // Post-Decrement

    int x = 5, y = 5;
    cout << x << " " << y << '\n';
    cout << ++x << " " << --y << '\n'; // Prefix
    cout << x << " " << y << '\n';
    cout << x++ << " " << y-- << '\n'; // Postfix
    cout << x << " " << y << '\n';

    //relational operators
    x < y;
    x > y;
    x >= y;
    x <= y;
    x == y;

    //bitwise operators
    int i = 10;     //10 = 1010 (binary)
    int j = i << 1; //j = 20 = 10100 (binary)
    i <<= 1;        // i = 5 = 101 (binary)

    int m = i | j; // m = 15 = 1111 (binary)
    int n = i & j; // m = 0 = 0000 (binary)
}