#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s = "dnjedeiule";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;

    // Sorting numeric String
    string num = "6372572";
    sort(num.begin(), num.end(), greater<int>());
    cout << num << endl;
    return 0;
}