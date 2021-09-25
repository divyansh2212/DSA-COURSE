#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    // Maxm Frequency of character in string
    string s = "bchskbcdhjlchwilvbvjliw";
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    int maxF = 0;
    char ans = 'a';
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] >= maxF)
        {
            maxF = freq[i];
            ans = 'a' + i;
        }
    }
    cout << ans << " " << maxF << endl;
    return 0;
}