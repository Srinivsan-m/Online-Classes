#include <iostream>
using namespace std;

int main()
{
    cout << "** Calculator **" << endl;
    int a, b;
    cout << "Enter two numbers to add : ";
    cin >> a >> b;
    cout << "The Sum of " << a << " and " << b << " is : " << a + b << endl;
    // printf("The sum of %d and %d is %d \n.", a, b, a + b);

    cout << "\n** Volume of a cuboid **" << endl;
    int length, width, height;
    cout << "Enter the length of the cuboid : ";
    cin >> length;
    cout << "Enter the width of the cuboid : ";
    cin >> width;
    cout << "Enter the height of the cuboid : ";
    cin >> height;
    int volume = length * width * height;
    cout << "Volume of the cuboid is : " << volume << " sq. units \n";
}