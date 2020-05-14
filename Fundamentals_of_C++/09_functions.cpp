#include <iostream>
using namespace std;

// No parameters
// No Return Type (ie. void)
void sayHey()
{
    cout << "Hey There !\n";
}

// Two parameter of int type
// No Return Type (ie. void)
void printSum(int a, int b)
{
    cout << a << " + " << b << " = " << a + b << '\n';
}

// Two parameter of int type
// int Return Type
int maxOfTwo(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    sayHey();
    printSum(-7, 4);
    int maxNum = maxOfTwo(3, 5);
    cout << maxNum << '\n';
}