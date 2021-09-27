#include <iostream>
#include <vector>
using namespace std;
vector<int> countSort(vector<int> a)
{
    vector<int> resultant(a.size());
    int mx = INT_MIN;
    for (int i = 0; i < a.size(); i++)
    {
        mx = max(mx, a[i]);
    }

    vector<int> count(a.size(), 0);
    for (int i = 0; i < count.size(); i++)
    {
        count[a[i]]++;
    }

    for (int i = 1; i < count.size(); i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    for (int i = a.size() - 1; i >= 0; i--)
    {
        resultant[--count[a[i]]] = a[i];
    }

    return resultant;
}
int main()
{
    vector<int> a = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    a = countSort(a);
    for (auto i : a)
    {
        cout << i << " ";
    }

    return 0;
}