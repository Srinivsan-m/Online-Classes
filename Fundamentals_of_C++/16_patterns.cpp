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
    cout << "\n\n";

    // number pyramid
    int count = 0, count2 = 0, k = 0;
    for (int i = 1; i <= rows; i++)
    {
        for (int space = 1; space <= rows - i; space++)
        {
            cout << "  ";
            count++;
        }

        while (k != 2 * i - 1)
        {
            if (count <= rows - 1)
            {
                cout << i + k << " ";
                count++;
            }
            else
            {
                count2++;
                cout << i + k - 2 * count2 << " ";
            }
            k++;
        }
        count = count2 = k = 0;
        cout << '\n';
    }
    cout << "\n\n";

    // Pascal's triangle
    int coef = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int space = 1; space <= rows - i; space++)
            cout << "  ";

        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            cout << coef << "   ";
        }
        cout << '\n';
    }
}
