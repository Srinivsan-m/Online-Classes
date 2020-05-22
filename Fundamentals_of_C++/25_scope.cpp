#include <iostream>
using namespace std;

// global variable
int var = 5;

void func()
{
    // this variable is local to the
    // function func() and cannot be
    // accessed outside this function
    int age = 18;
    cout << age;
}

// global variable accessed from
// within a function
void display()
{
    cout << var << endl;
}

// ** Static example
void demo()
{
    static int count = 0;
    cout << count << " ";
    count++;
}

int main()
{
    cout << "Age is: ";
    func();
    cout << "\n\n";

    display();

    // changing value of global
    // variable from main function
    var = 10;
    display();

    // if global and local variables have same name
    // local variable is given a priority
    cout << "\n";
    int var = 12;
    // :: -> scope resolution operator
    cout << "Value of global var is " << ::var;
    cout << "\nValue of local var is " << var;
    cout << "\n\n";
    for (int i = 0; i < 5; i++)
        demo();
}
