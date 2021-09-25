#include <iostream>
using namespace std;
int main()
{
    // Checking if a number is prime
    int num, i;
    cout << "Enter a number:\n";
    cin >> num;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "It is a nom-prime number.\n";
            break;
        }
    }
    if (i == num)
    {
        cout << "It is a prime number.\n";
    }

    // Decimal to Binary
    int a;
    cout << "Enter a number in decimal:\n";
    cin >> a;
    cout << "The number in binary is ";
    while (a > 0)
    {
        int rem = a % 2;
        cout << rem;
        a = a / 2;
    }
    cout << endl;

    // Reversing a number
    int n;
    cin >> n;
    int rev_num = 0;
    while (n > 0)
    {
        int rem = n % 10;
        rev_num = rev_num * 10 + rem;
        n = n / 10;
    }
    cout << rev_num << " \n ";
    return 0;
}