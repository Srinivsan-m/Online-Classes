#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = *a;
}

void funValue(int x)
{
    x = 10;
    cout << "value of x in funValue is : " << x << endl;
}

void funRef(int &x)
{
    x = 10;
    cout << "value of x in funValue is : " << x << endl;
}

int getMax(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int val = 12;
    cout << val << '\n';
    // 12
    cout << &val << '\n';
    // 0x61ff0c (any address)
    cout << *(&val) << '\n';
    // 12
    cout << "\n\n";
    // Alternate way to print
    // printf("%d", x);
    // printf("%d", &x);

    // ** Declaring A Pointer **

    int *intPtr;
    float *floatPtr;
    // int *ptfFunction(); (function which returns a pointer)

    //**Assign Value

    int v = 5;
    int *p = &v;
    int *p2;
    p2 = &v;
    cout << v << " " << &v << " " << &p << " " << &p2 << " " << p;
    cout << "\n\n";
    //**Pointer To same data type**
    int iValue = 5;
    double dValue = 7.0;

    int *iPtr = &iValue;    // ok
    double *dPtr = &dValue; // ok
    // iPtr = &dValue;         // wrong -- int pointer cannot point to the address of a double variable
    // dPtr = &iValue;         // wrong -- double pointer cannot point to the address of an int variable
    // int *ptr = 5; // Not legal
    // double *dPtr{0x0012FF7C}; // not okay

    //**Dereferencing Pointers **//
    // ptr is the same as &value
    // *ptr is treated the same as value
    int var = 5;
    cout << &var << " " << var << endl;
    // 0x61ff08 5
    int *ptr = &var;
    cout << ptr << " " << *ptr << endl;
    // 0x61ff08 5
    cout << sizeof(ptr) << " " << sizeof(var) << endl;
    cout << "\n\n";
    // **Null Pointer
    int *nullPtr = 0;

    if (nullPtr)
        cout << "fptr points to a float value.\n";
    else
        cout << "fptr is a null pointer.\n";
    cout << "\n\n";
    int ar[5] = {1, 5, 8, 9, 0};
    cout << ar << " " << *ar << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ar[i] << " " << *(ar + i) << " " << &ar[i] << " " << ar + i << endl;
    }
    cout << "\n\n";

    char name[] = "Jenny";
    for (int i = 0; i < 5; i++)
    {
        cout << (name + i) << " " << *(name + i) << endl;
    }
    cout << "\n\n";
    // **pass by value
    int x = 5;
    funValue(x);
    cout << "value of x from main : " << x << endl;
    funRef(x);
    cout << "value of x from main : " << x << endl;
    cout << "\n\n";
    // ** shorthand -f-else
    int a = 5, b = 10;
    cout << "Max num of two is : " << getMax(a, b);
    cout << "\n\n";

    //**Swapping Numbers
    int n1 = 10;
    int n2 = 7;
    cout << "n1 : " << n1 << "   n2 : " << n2 << endl;

    // ** Using a 3rd variable
    // int c = a;
    // a = b;
    // b = c;

    // ** Without using 3rd variable
    // a = b + a;
    // b = a - b;
    // a = a - b;

    // ** using pass by reference
    swap(n1, n2);
    cout << "n1 : " << n1 << "   n2 : " << n2 << endl;
}
