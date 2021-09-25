#include <iostream>
using namespace std;
void replacePi(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        return replacePi(s.substr(2));
    }
    else
    {
        cout << s[0];
        return replacePi(s.substr(1));
    }
}
int main()
{
    replacePi("ppihjwhwlpihxpiin");
    return 0;
}