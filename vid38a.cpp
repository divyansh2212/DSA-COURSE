#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}
int pthPowerofN(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else
    {
        return (n * pthPowerofN(n, p - 1));
    }
}
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}
int sumTillN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n + sumTillN(n - 1));
    }
}
int main()
{
    cout << sumTillN(5) << endl;
    cout << factorial(6) << endl;
    cout << pthPowerofN(4, 3) << endl;
    // To find nth term in the sequence
    cout << fibonacci(11);
    return 0;
}