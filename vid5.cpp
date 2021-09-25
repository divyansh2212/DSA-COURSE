#include <iostream>
using namespace std;
int main()
{
    // To find out greater number.
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << a << "\n";
        }
        else
        {
            cout << c << "\n";
        }
        goto end;
    }
    if (b > c)
    {
        if (b > a)
        {
            cout << b << endl;
        }
        else
        {
            cout << a << endl;
        }
        goto end;
    }
    if (c > a)
    {
        if (c > b)
        {
            cout << c << endl;
        }
        else
        {
            cout << b << endl;
        }
        goto end;
    }
end:

    // To find out odd or even.
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }

    return 0;
}