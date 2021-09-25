// Maxm Consecutive Ones

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int k;
    cin >> k;
    for (auto &i : a)
    {
        cin >> i;
    }
    int ans = 0, j = 0, zerocount = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 0)
        {
            zerocount++;
        }
        while (zerocount > k)
        {
            if (a[j] == 0)
            {
                zerocount--;
            }
            j++;
        }
        ans = max(ans, i - j + 1);
    }
    cout << ans;
    return 0;
}