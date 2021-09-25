#include <iostream>
using namespace std;
void generateSubSeq(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    generateSubSeq(s.substr(1), ans);
    generateSubSeq(s.substr(1), ans + s[0]);
}
int main()
{
    generateSubSeq("ABC", "");
    cout << endl;
    return 0;
}