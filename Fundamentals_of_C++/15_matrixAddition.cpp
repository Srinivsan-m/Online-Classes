#include <iostream>
using namespace std;

void matrixAddition(int rows, int cols)
{
    int matA[rows][cols];
    int matB[rows][cols];
    int matSum[rows][cols];

    cout << "Enter the elements of Matrix A : \n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matA[i][j];

    cout << "Enter the elements of Matrix B : \n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matB[i][j];

    // Doing the Sum
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            matSum[i][j] = matA[i][j] + matB[i][j];

    // Printing the Output
    cout << '\n';
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%02d ", matA[i][j]);
        cout << '\n';
    }
    cout << " + \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%02d ", matB[i][j]);
        cout << '\n';
    }
    cout << " = \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%02d ", matSum[i][j]);
        cout << '\n';
    }
}

int main()
{
    cout << "\t ** Matrix Addition **\n";
    cout << "Enter the dimensions m & n for the m*n matrix : ";
    int m, n;
    cin >> m >> n;
    matrixAddition(m, n);
}