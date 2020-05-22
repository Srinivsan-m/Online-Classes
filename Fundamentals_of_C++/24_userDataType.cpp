#include <iostream>
using namespace std;

union test {
    int x, y;
};

union test2 {
    int x;
    char y;
} t2; // alternate way of declaration
union test3 {
    int x[20];
    char y;
} t3;

struct sTest
{
    int x, y;
};

// ** Enums
enum week
{
    mon,
    tue = 5,
    wed = 8,
    thur,
    fri = 12,
    sat,
    sun
} d2,
    d3;

enum state
{
    working = 1,
    failed = 0,
    freeze = 0
} s1;

typedef unsigned long long int ull;
typedef long int li;

#define PI 3.14159
#define getMax(a, b) (a > b ? a : b)

int factorial(int n)
{
    if (n >= 1)
        return n * factorial(n - 1);
    else
        return 1;
    //exit condition
}

int main()
{
    // A union variable t
    union test t;

    // t.y also gets value 2
    t.x = 2;
    cout << "x is now 2\n"
         << t.x << " " << t.y << '\n';

    // t.x is also updated to 8
    t.y = 8;
    cout << "y is now 8\n"
         << t.x << " " << t.y << '\n';

    cout << "Size t : " << sizeof(t);

    struct sTest t1;
    cout << "\nsize t1 : " << sizeof(t1) << endl;
    cout << "size t2 : " << sizeof(t2) << endl;
    cout << "size t3 : " << sizeof(t3) << endl;
    cout << "\n";

    enum week day;
    day = thur;
    d2 = sun;
    d3 = tue;
    cout << day << endl;
    cout << day << " " << d2 << " " << d3;
    cout << "\n";

    s1 = freeze;
    cout << s1;
    cout << "\n\n";
    ull num1 = 54444444444444444;
    li num2 = 15645515;
    cout << num1 << " " << sizeof(num1) << endl;
    cout << num2 << " " << sizeof(num2) << endl;
    cout << "\n";
    cout << PI << '\n';
    cout << "\nmax of 5, 7 : " << getMax(5, 7);
    // 7
    cout << "\nfact of 6 :" << factorial(6);
    // 720
}
