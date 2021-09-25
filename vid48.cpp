#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // ways for traversing a vector

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    } // 1 2 3
    cout << endl;

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto value : v)
    {
        cout << value << " ";
    }
    // ///////////////////////////////////////////////////

    vector<int> v2(3, 50); // 50 50 50

    swap(v, v2);
    //  sort(v2.begin(), v2.end());
    return 0;
}