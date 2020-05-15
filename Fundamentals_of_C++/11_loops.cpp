#include <iostream>
using namespace std;

void printTable(int num, int limit)
{
    for (int i = 1; i <= limit; i++)
    {
        cout << num << " * " << i << " = " << num * i << '\n';
    }
}

int main()
{
    cout << "I love Programming <3 \n";
    cout << "I love Programming <3 \n";
    cout << "I love Programming <3 \n";
    cout << "I love Programming <3 \n";
    cout << "I love Programming <3 \n";

    // ** Goes into an infinite loop ** //
    // while (1)
    // {
    //     cout << "I love Programming <3 \n";
    // }

    // ** For Loop **//
    for (int i = 0; i < 5; i++)
    {
        cout << i << '\n';
    }

    printTable(9, 15);

    // ** While Loop **//
    int T = 6;
    while (T)
    {
        cout << T << '\n';
        T--;
    }

    // ** do - While Loop **//
    int i = 3;
    do
    {
        cout << "Hey !!\n";
        i++;
    } while (i < 3);

    // ** Using loops to print patterns **//
    int count = 1;
    // Iterate through every number between 1 and 50
    while (count <= 50)
    {
        // print the number (pad numbers under 10 with a leading 0 for formatting purposes)
        if (count < 10)
        {
            cout << "0" << count << ' ';
        }
        else
        {
            cout << count << ' ';
        }

        // ** An alternate way to padd numbers with a leading zero
        // printf("%02d ", num);

        // if the loop variable is divisible by 10, print a newline
        if (count % 10 == 0)
        {
            cout << '\n';
        }

        // increment the loop counter
        ++count;
    }

    return 0;
}