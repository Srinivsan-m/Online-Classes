#include <iostream>
#include <iomanip>
// parametric manipulators
//http://www.cplusplus.com/reference/iomanip/
using namespace std;

int main()
{
    int rows;
    cin >> rows;
    cout << "\n\n";

    // Half Number Triangle
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // Alternate method
            // for padding with leading zeros
            cout << setfill('0') << setw(2) << j << " ";
            // cout << j << " ";
        }
        cout << '\n';
    }
    cout << "\n\n";

    // Inverted Half * Triangle
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }
}