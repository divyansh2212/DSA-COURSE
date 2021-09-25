#include <iostream>
#include <cmath>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
void fib(int n)
{
    int t1 = 0, t2 = 1;
    int nextTerm;
    for (int i = 1; i <= n; i++)
    {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}
bool printPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    // WAP to print all prime numbers between two given numbers
    int a, b;
    cout << "Enter the first number:\n";
    cin >> a;
    cout << "Enter the second number:\n";
    cin >> b;
    for (int i = a + 1; i < b; i++)
    {
        if (printPrime(i) == true)
        {
            cout << i << endl;
        }
    }

    // WAP to print Fibonacci series
    int terms;
    cout << "\nEnter the number of terms in the series you want to print:\n";
    cin >> terms;
    fib(terms);

    // WAP to find the factorial of a given number
    int num;
    cout << "\n\nEnter the number you want factorial of:\n";
    cin >> num;
    cout << "The factorial of " << num << " is " << factorial(num);

    // WAP to find nCr
    int n, r;
    cout << "\n\nEnter the values of n and r:\n";
    cin >> n >> r;
    int ans = factorial(n) / (factorial(n - r) * factorial(r));
    cout << "The answer is " << ans << endl;

    // WAP to print Pascal triangle
    int rows;
    cout << "\nEnter the number of rows you want to print:" << endl;
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int ans = factorial(i) / (factorial(i - j) * factorial(j));
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}