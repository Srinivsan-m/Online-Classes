#include <iostream>
using namespace std;

int main()
{
    //data_type name_of_array[size_of_array];

    float arrFloat[] = {10.56, 4.6, 3.3, 7.8};
    //initializes all the elements as 0
    float arr1[7] = {};

    int arr[5];
    arr[0] = 5;
    arr[1] = 3;
    arr[2] = 65;
    arr[3] = 467;
    arr[4] = -98;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int array[n];
    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    int arr_1d[2];
    int arr_2d[2][3];
    int arr_3d[3][3][2];

    int arr2D[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    // to set a specific array element
    arr2D[2][1] = 10;

    // printing a 2D array
    // using nested for loops
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr2D[i][j] << " ";
        }
        cout << '\n';
    }

    // ** Sample code to generate the following outcome **//
    // inArr => 1 2 3 4 5 6
    // opArr => 1 3 5 7 9 11
    int inArr[] = {1, 2, 3, 4, 5, 6};
    int opArr[6];
    opArr[0] = inArr[0];
    for (int i = 1; i < 6; i++)
    {
        opArr[i] = inArr[i - 1] + inArr[i];
    }
    cout << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << opArr[i] << " ";
    }
    cout << '\n';
}
