// Pair Sum Problem

#include <iostream>
using namespace std;
bool pairSum(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        if (arr[s] + arr[e] == k)
        {
            return true;
        }
        else if (arr[s] + arr[e] > k)
        {
            e--;
        }
        else if (arr[s] + arr[e] < k)
        {
            s++;
        }
    }
    return false;
}
int main()
{
    int n;
    cout << "Enter length of the array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key you want to search:" << endl;
    cin >> key;
    cout << endl;
    cout << pairSum(arr, n, key);
    return 0;
}