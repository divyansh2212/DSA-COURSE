#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
    // Checking if a number is prime or not
    int num;
    cin >> num;
    bool flag = 0;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << "Non-Prime\n\n";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Prime\n\n";
    }

    // Reversing a number
    int n;
    cin >> n;
    int reverse = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
    }
    cout << reverse << endl
         << endl;

    // Checking if a number is Armstrong or not
    int num1;
    int length;
    cout << "Enter the length of your number:\n";
    cin >> length;
    cout << "Enter the number:\n";
    cin >> num1;
    int sum = 0;
    int originalnum = num1;

    while (num1 > 0)
    {
        int lastdigit = num1 % 10;
        sum = sum + pow(lastdigit, length);
        num1 = num1 / 10;
    }
    if (sum == originalnum)
    {
        cout << "It is a Armstrong number.\n\n";
    }
    else
    {
        cout << "It is not a Armstrong number.\n\n";
    }

    // Write a program to display all the factors of a given number
    int num2;
    cout << "Enter a number:\n";
    cin >> num2;
    cout << "The factors of " << num2 << " are:\n";
    for (int i = 1; i <= num2; i++)
    {
        if (num2 % i == 0)
        {
            cout << i << " ";
        }
    }
}