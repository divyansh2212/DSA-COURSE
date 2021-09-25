#include <iostream>
using namespace std;
int main()
{ // Record Breaking Day
    int n;
    cout << "Enter the no of elements in the array:" << endl;
    cin >> n;
    int arr[n + 1];
    arr[n] = INT_MIN;
    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << "The no of record breaking days are " << n;
        return 0;
    }
    int ans = 0, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx && arr[i] > arr[i + 1])
        {
            ans++;
        }
        mx = max(mx, arr[i]);
    }
    cout << "The no of record breaking days are " << ans;
    return 0;
}