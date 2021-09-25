#include <iostream>
using namespace std;
int main()
{
    // Longest Contiguous Arithmetic Sub-Array
    int n;
    cout << "Enter no of elements in the array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pd = arr[1] - arr[0];
    int curr = 2, ans = 2, j = 2;
    while (j < n)
    {
        if (arr[j] - arr[j - 1] == pd)
        {
            curr++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans;
    return 0;
}