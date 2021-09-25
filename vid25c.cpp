#include <iostream>
using namespace std;
int main()
{
    // Maxm Sub-Array sum using O(n2)
    int n;
    cout << "Enter length of the array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    int currArr[n + 1];
    currArr[0] = 0;
    for (int i = 0; i < n; i++)
    {
        currArr[i + 1] = currArr[i] + arr[i];
    }
    int maxSum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int currSum = 0;
        for (int j = 0; j < i; j++)
        {
            currSum = currArr[i] - currArr[j];
            maxSum = max(maxSum, currSum);
        }
    }
    cout << maxSum;
    return 0;
}