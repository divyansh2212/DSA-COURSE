#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
int main()
{
    // Finding GCD
    cout << gcd(27, 36);
    return 0;
}