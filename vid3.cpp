#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    cout << "Size of int a is " << sizeof(a) << endl;

    float b = 3.14;
    cout << "Size of float b is " << sizeof(b) << endl;

    char c ;
    cout << "Size of char c is " << sizeof(c) << endl;

    bool d;
    cout << "Size of bool d is " << sizeof(d) << endl;

    short int e;
    cout << "Size of short int e is " << sizeof(e) << endl;

    long int f;
    cout << "Size of long int f is " << sizeof(f) << endl;
    return 0;
}