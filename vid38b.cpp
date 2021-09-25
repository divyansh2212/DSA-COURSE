#include <iostream>
using namespace std;
void inc(int n)
{
    if (n == 1)
    {
        cout << "1 ";
        return;
    }
    inc(n - 1);
    cout << n << " ";
}
void dec(int n)
{
    if (n == 1)
    {
        cout << "1 ";
        return;
    }
    cout << n << " ";
    dec(n - 1);
}
int main()
{
    inc(38);
    cout << endl;
    dec(38);
    return 0;
}