#include <iostream>
using namespace std;
int incluExclu(int n, int a, int b)
{
    int c1, c2, c3;
    c1 = n / a;
    c2 = n / b;
    c3 = n / (a * b);
    return (c1 + c2 - c3);
}
int main()
{
    // Inclusion-Exclusion
    int n, a, b;
    cin >> n >> a >> b;
    cout << incluExclu(n, a, b);
    return 0;
}