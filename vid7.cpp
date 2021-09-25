#include <iostream>
using namespace std;
int main()
{
    int pocketMoney = 700;
    for (int date = 1; date < 32; date++)
    {
        if (date % 2 != 0)
        {
            continue;
        }
        pocketMoney = pocketMoney - 300;

        if (pocketMoney <= 0)
        {
            break;
        }
        cout << "Go out at date " << date << "!" << endl;
    }

    // Not printing numbers that are divisble by 4.
    for (int i = 1; i < 101; i++)
    {
        if (i % 4 == 0)
        {
            continue;
        }
        cout << i << " is not divisible by 4." << endl;
    }

    // Check if number is prime or not
    int num;
    int i;
    cout << "Enter the number you want to check:" << endl;
    cin >> num;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "It is a non prime number." << endl;
            break;
        }
    }
    if (i == num)
    {
        cout << "It is a prime number.\n";
    }

    // Printing prime numbers between a and b
    int a, b;
    cout << "Enter number a:\n";
    cin >> a;
    cout << "Enter number b:\n";
    cin >> b;
    for (int i = a + 1; i < b; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            cout << i << endl;
        }
    }

    return 0;
}