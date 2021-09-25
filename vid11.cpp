#include <iostream>
using namespace std;
int rows, columns;
void palindromicpattern()
{
    cout << "\nEnter number of maxm rows you want to print:\n";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void barfiStarpattern()
{
    cout << "\nEnter number of maxm rows you want to print:\n";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void numberTrianglepattern()
{
    cout << "\nEnter number of maxm rows you want to print:\n";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << "  ";
        }
        cout << endl;
    }
}
void rhombuspattern()
{
    cout << "\nEnter the maxm number of stars you want to print in a line:\n";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= rows; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern01()
{
    cout << "\nEnter number of maxm rows you want to print:\n";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
void invertedPattern()
{
    cout << "\nEnter number of maxm rows you want to print:\n";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main()
{
    char input;
    cout << "\nHello There!" << endl;
    cout << "We are printing different Patterns here!" << endl;
    cout << "\nSelect a option which you want to print:\n";
    cout << "1. Inverted Pattern\n2. 0-1 Pattern\n3. Rhombus Pattern\n4. Number Triangle Pattern\n5. Barfi Star Pattern\n6. Palindromic Pattern\n";
    cin >> input;
    switch (input)
    {
    case '1':
        cout << "\nYou chose Inverted Pattern." << endl;
        invertedPattern();
        break;
    case '2':
        cout << "\nYou chose 0-1 Pattern." << endl;
        pattern01();
        break;
    case '3':
        cout << "\nYou chose Rhombus Pattern." << endl;
        rhombuspattern();
        break;
    case '4':
        cout << "\nYou chose Number Triangle Pattern." << endl;
        numberTrianglepattern();
        break;
    case '5':
        cout << "\nYou chose Number Barfi Star Pattern." << endl;
        barfiStarpattern();
        break;
    case '6':
        cout << "\nYou chose Number Palindromic Pattern." << endl;
        palindromicpattern();
        break;

    default:
        break;
    }
    return 0;
}