#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the order of the matrix:" << endl;
    cin >> row >> col;
    int mat[row][col];
    cout << "\nEnter the elements of the matrix:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }
    int key;
    cout << "Enter the element you want to search:" << endl;
    cin >> key;
    int r = 0, c = col - 1;
    while (r < row && col >= 0)
    {
        if (mat[r][c] == key)
        {
            cout << "\nElement found!" << endl;
            return 0;
        }
        else if (mat[r][c] > key)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    cout << "\nElement not found!" << endl;
    return 0;
}