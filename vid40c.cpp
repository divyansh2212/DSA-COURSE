#include <iostream>
using namespace std;
string moveXtoEnd(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    if (s[0] == 'x')
    {
        return (moveXtoEnd(s.substr(1)) + s[0]);
    }
    else
    {
        return (s[0] + moveXtoEnd(s.substr(1)));
    }
}
int main()
{
    cout << moveXtoEnd("xhudhxvsxxhwuihlxsx");
    return 0;
}