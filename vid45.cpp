#include <iostream>
using namespace std;
bool isSafe(int **arr, int row, int col, int n)
{
    for (int i = 0; i < row; i++)
    {
        if (arr[i][col] == 1)
        {
            return false;
        }
    }
    int x = row, y = col;
    while (x >= 0 && y >= 0)
    {
        if (arr[x][y] == 1)
        {
            return false;
        }
        x--;
        y--;
    }
    x = row, y = col;
    while (x >= 0 && y < n)
    {
        if (arr[x][y] == 1)
        {
            return false;
        }
        x--;
        y++;
    }
    return true;
}
bool nQueen(int **arr, int row, int n)
{
    if (row >= n)
    {
        return true;
    }
    for (int i = 0; i < n; i++)
    {
        if (isSafe(arr, row, i, n))
        {
            arr[row][i] = 1;
            if (nQueen(arr, row + 1, n))
            {
                return true;
            }
            arr[row][i] = 0;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    if (nQueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}