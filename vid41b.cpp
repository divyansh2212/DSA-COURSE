#include <iostream>
using namespace std;
int gameBoard(int s, int e)
{
    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }
    int count = 0;
    for (int i = 1; i < 7; i++)
    {
        count = count + gameBoard(s + i, e);
    }
    return count;
}
int main()
{
    cout << gameBoard(0, 3);
    return 0;
}