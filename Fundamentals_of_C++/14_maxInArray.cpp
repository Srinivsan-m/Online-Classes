// #include <iostream>
// #include <climits>
// #include <algorithm>

#include <bits/stdc++.h>
// STL
// Standard Template Library
// A collection of the most commonly used libraries
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    printf("Enter the %02d array elements : ", n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = -INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Alternate method
    // Sort the array and fetch the last element
    // sort(arr, arr + n);
    // int max = arr[n - 1];

    cout << "The max element of the array is : " << max << '\n';
}