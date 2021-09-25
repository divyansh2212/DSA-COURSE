#include <iostream>
using namespace std;
void genSubSeqWithASCII(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << " ";
        return;
    }
    int ascii = s[0];
    genSubSeqWithASCII(s.substr(1), ans);
    genSubSeqWithASCII(s.substr(1), ans + s[0]);
    genSubSeqWithASCII(s.substr(1), ans + to_string(ascii));
}
int main()
{
    genSubSeqWithASCII("ABC", "");
    return 0;
}