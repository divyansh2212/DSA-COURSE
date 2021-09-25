#include <iostream>
using namespace std;
int tilingProblem(int j)
{
    if (j == 1)
    {
        return 1;
    }
    if (j == 0)
    {
        return 0;
    }
    return (tilingProblem(j - 1) + tilingProblem(j - 2));
}
int main()
{
    int r1, c1;
    cout << "Enter the rows and columns of block:" << endl;
    cin >> r1 >> c1;
    int r2, c2;
    cout << "Enter the rows and columns of tile:" << endl;
    cin >> r2 >> c2;
    if (r1 == r2)
    {
        cout << tilingProblem(4);
    }

    return 0;
}