#include <iostream>
// Header that defines the standard input/output stream objects

using namespace std;
// standard library
// A namespace is designed to overcome this difficulty and is used as additional information to differentiate similar functions, classes, variables etc. with the same name available in different libraries. Using namespace, you can define the context in which names are defined. In essence, a namespace defines a scope.

// Comment
// can be used for making notes
/*
all
these
lines are comments
*/

// main function
// the first function to be executed
int main()
{
    cout << "Hello World !" << endl;
    // cout : standard output
    // << give an output to the screen
    // "Hello World !" : the string to print
    // endl : endline or new line

    // ** variable declaration **//
    string name = "Ketan";
    int age = 25;

    printf("Hi my name is %s .\n", name);
    // int : data type
    // age : variable name
    // 20 : value
    cout << "Age of " << name << " is : " << age << endl;
    name = "Hari";
    age = 20;
    cout << "Age of " << name << " is : " << age << endl;

    // example for new line escape sequence
    cout << "This is line 1.\n This is line 2.\n";

    // another way to print output
    printf("Today's date is 12 May.\nThe time is almost 7pm.\n");

    return 0;
}
