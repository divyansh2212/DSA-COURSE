#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
void decimalTohexa(int n)
{
    char b[20];
    int i;
    for (i = 0; n > 0; i++)
    {
        int temp = n % 16;
        if (temp < 10)
        {
            b[i] = temp + 48;
            i++;
        }
        else
        {
            b[i] = temp + 55;
            i++;
        }

        n = n / 16;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << b[j];
    }
}
void decimalToOctal(int n)
{
    int b[20];
    int i;
    for (i = 0; n > 0; i++)
    {
        b[i] = n % 8;
        n = n / 8;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << b[j];
    }
}
void decimalToBinary(int n)
{
    int a[19];
    int i;
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << a[j];
    }
}
int main()
{
    // Decimal to Binary
    int deci;
    cout << "Enter a decimal number:\n";
    cin >> deci;
    cout << "The number in binary is ";
    decimalToBinary(deci);
    cout << endl
         << endl;

    // Decimal to Octal
    int decim;
    cout << "Enter a decimal number:\n";
    cin >> decim;
    cout << "The number in Octal is ";
    decimalToOctal(decim);
    cout << endl
         << endl;

    // Decimal to hexaDecimal
    int decima;
    cout << "Enter a decimal number:\n";
    cin >> decima;
    cout << "The number in hexadecimal is ";
    decimalTohexa(decima);
    return 0;
}