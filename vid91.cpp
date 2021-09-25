// Length of longest sub string without repitition
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int start = -1;
    vector<int> a(256, -1);
    int maxLen = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (a[s[i]] > start)
        {
            start = a[s[i]];
        }
        a[s[i]] = i;
        maxLen = max(maxLen, i - start);
    }
    cout << maxLen;
    return 0;
}