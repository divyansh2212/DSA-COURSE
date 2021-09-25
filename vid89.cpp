// Three Sum Problem
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    bool found = false;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int s = i + 1, e = n - 1;
        while (s < e)
        {
            if (a[i] + a[s] + a[e] == target)
            {
                found = true;
                break;
            }
            else if (a[i] + a[s] + a[e] < target)
            {
                s++;
            }
            else
            {
                e--;
            }
        }
    }
    if (found)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}