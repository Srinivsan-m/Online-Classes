#include <iostream>
using namespace std;

// argc -> argument count
// argv -> argument vector
int main(int argc, char **argv)
{
    cout << "no of arguments : " << argc << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << i << " : " << argv[i] << endl;
    }

    // Task : print the sum of numbers passed using cmd line argument
    int sum = 0;

    cout << "\n\nSum of : ";
    for (int i = 1; i < argc; i++)
    {
        cout << argv[i] << " ";
        sum += atoi(argv[i]);
        // Parses the C-string str interpreting its content
        // as an integral number,
        // which is returned as a value of type int.
    }
    cout << '\n'
         << sum << endl;
}