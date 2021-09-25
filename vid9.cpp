#include <iostream>
using namespace std;
int main()
{
    // Que 1
    int a = 5;
    a = 1, 2, 3;
    cout << a << endl;

    // Que 2
    a = (1, 2, 3);
    cout << a << endl;

    // Que 3
    int x = 2;
    (x & 1) ? cout << "true\n" : cout << "false\n";

    // Que 4
    int i = 2;
    cout << 3 * i-- << endl;

    // Que 5
    int j = 10;
    j++;
    j *j;
    cout << j << endl;

    // Que 6
    int d = 1, e = 3, f;
    f = e << d;
    cout << "f is " << f << endl;
    e = f * (e * (++d)--);
    d = d >> e;
    cout << e << endl;
    return 0;
}