#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    cout << "Enter order of matrix 1:" << endl;
    cin >> n1 >> n2;
    cout << "Enter order of matrix 2:" << endl;
    cin >> n2 >> n3;
    int mat1[n1][n2], mat2[n2][n3], ans[n1][n3];
    cout << "Enter the elements in the matrix 1:" << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> mat1[i][j];
        }
    }
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> mat2[i][j];
        }
    }
    cout << "\nThe matrix 1 is:\n"
         << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << mat1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nThe matrix 2 is:\n"
         << endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << mat2[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    cout << "\nThe multiplication matrix is:\n"
         << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << ans[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}