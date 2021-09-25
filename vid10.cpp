// See from 18:00

#include <iostream>
using namespace std;
int rows, columns;
void butterflyPattern()
{
    cout << "\nEnter number of maximum stars you want to print in a line:" << endl;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = 2 * rows - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = 2 * rows - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void reverseTriangleAfter180Rotation()
{
    cout << "\nEnter number of maximum stars you want to print in a line:" << endl;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (j <= i - 1)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}
void floydTriangle()
{
    cout << "\nEnter how many rows you want to print:" << endl;
    cin >> rows;
    int count = 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}
void halfPyramidusingNumbers()
{
    cout << "\nEnter how many rows you want to print:" << endl;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void trianglePattern()
{
    cout << "\nEnter number of maximum stars you want to print in a line:" << endl;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void triangleAfter180Rotation()
{
    cout << "\nEnter number of maximum stars you want to print in a line:" << endl;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (j <= rows - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}
void reverseTrianglePattern()
{
    cout << "\nEnter number of maximum stars you want to print in a line:" << endl;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void hollowRectanglePattern()
{
    cout << "\nEnter number of rows you want to print:" << endl;
    cin >> rows;
    cout << "\nEnter number of columns you want to print:" << endl;
    cin >> columns;
    cout << "\nHere is your pattern:" << endl;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == columns)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void rectanglePattern()
{
    cout << "\nEnter number of rows you want to print:" << endl;
    cin >> rows;
    cout << "\nEnter number of columns you want to print:" << endl;
    cin >> columns;
    cout << "\nHere is your pattern:" << endl;
    for (int i = 1; i <= rows; i++)
    {
        for (int i = 1; i <= columns; i++)
        {
            cout << "* ";
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
    cout << "1. Rectangle Pattern\n2. Hollow Rectangle Pattern\n3. Reverse Triangle Pattern\n4. Triangle after 180 Rotation\n5. Triangle Pattern\n6. Half Pyramid using numbers\n7. Floyd's Triangle\n8. Reverse Triangle after 180 Rotation\n9. Butterfly Pattern\n";
    cin >> input;

    switch (input)
    {
    case '1':
        cout << "\nYou chose Rectangular Pattern." << endl;
        rectanglePattern();
        break;
    case '2':
        cout << "\nYou chose Hollow Rectangular Pattern." << endl;
        hollowRectanglePattern();
        break;
    case '3':
        cout << "\nYou chose Reverse Triangle Pattern." << endl;
        reverseTrianglePattern();
        break;
    case '4':
        cout << "\nYou chose Triangle after 180 rotaion Pattern." << endl;
        triangleAfter180Rotation();
        break;
    case '5':
        cout << "\nYou chose Triangle Pattern." << endl;
        trianglePattern();
        break;
    case '6':
        cout << "\nYou chose Half Pyramid using numbers Pattern." << endl;
        halfPyramidusingNumbers();
        break;
    case '7':
        cout << "\nYou chose Floyd's Triangle." << endl;
        floydTriangle();
        break;
    case '8':
        cout << "\nYou chose Reverse Triangle after 180 rotaion Pattern." << endl;
        reverseTriangleAfter180Rotation();
        break;
    case '9':
        cout << "\nYou chose Butterfly Pattern." << endl;
        butterflyPattern();
        break;
    default:
        cout << "\nYou chose an invalid option. Please chose a valid option." << endl;
        main();
        break;
    }
    return 0;
}