#include <iostream>
#include <climits>
using namespace std;
int main()
{   
    // To print maxm elements in the array
    int n;
    cout << "Enter no of elements in the array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << " ";
    }
    return 0;
}