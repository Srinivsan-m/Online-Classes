#include <iostream>
using namespace std;

int main()
{
    // ** variable naming **//
    int a;
    int myVariableName;   //camelCase
    int my_variable_name; // snake_case
    int india;
    int India;
    // cannot start a variable name with a number
    // int 05hu = 65;
    // cout << 05hu << endl; //gives an error

    cout << " ** Variable Assignment ** \n";
    int var1 = 10;
    cout << "var 1 : " << var1 << endl;
    int var2;
    cout << "var 2 : " << var2 << endl; //uninitialised variable produces an garbage values
    var2 = 21;
    cout << "var 2 : " << var2 << endl;
    var2 = 31;
    cout << "var 2 : " << var2 << endl;
    int var3(12);
    cout << "var 3 : " << var3 << endl;
    int var4{43};
    cout << "var 4 : " << var4 << endl;
    int var5{};
    cout << "var 5 : " << var5 << endl;
    int var6(var3);
    cout << "var 6 : " << var6 << endl;
    int var7 = var2;
    cout << "var 7 : " << var7 << endl;
}