#include <iostream>
#include <string>
using namespace std;
int hexadecimalToDecimal(string n)
{
    int ans = 0;
    int base = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans = ans + base * (n[i] - '0');
        }
        if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans = ans + base * (n[i] - 'A' + 10);
        }
        base = base * 16;
    }
    return ans;
}
int octaToDecimal(int n)
{
    int ans = 0;
    int base = 1;
    while (n > 0)
    {
        int lastDigit = n % 10;
        ans = ans + base * lastDigit;
        base = base * 8;
        n = n / 10;
    }
    return ans;
}
int binaryToDecimal(int n)
{
    int ans = 0;
    int base = 1;
    while (n > 0)
    {
        int lastDigit = n % 10;
        ans = ans + base * lastDigit;
        base = base * 2;
        n = n / 10;
    }
    return ans;
}
bool check(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y, c = z;
    }
    else if (a == y)
    {
        b = x, c = z;
    }
    else if (a == z)
    {
        b = x, c = y;
    }
    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int sum(int num)
{
    int sum;
    sum = (num * (num + 1)) / 2;
    return sum;
}
int main()
{
    // Sum of first n natural numbers
    int n;
    cin >> n;
    cout << "The sum of first " << n << " natural numbers is " << sum(n) << "." << endl;

    // Checking for Pythagorean Triplet
    int x, y, z;
    cout << "\nEnter 3 numbers respectively:\n";
    cin >> x >> y >> z;
    if (check(x, y, z))
    {
        cout << "Pythagorean Triplet.\n";
    }
    else
    {
        cout << "Not a Pythagorean Triplet.\n";
    }

    // Binary to Decimal
    int binary;
    cout << "\nEnter a Binary Number:\n";
    cin >> binary;
    cout << binaryToDecimal(binary) << endl;

    // Octal to Decimal
    int octal;
    cout << "\nEnter a Octal Number:\n";
    cin >> octal;
    cout << octaToDecimal(octal) << endl;

    // hexadecimal to Decimal
    string hexaDeci;
    cout << "\nEnter a hexadecimal Number:\n";
    cin >> hexaDeci;
    cout << hexadecimalToDecimal(hexaDeci) << endl;
    return 0;
}