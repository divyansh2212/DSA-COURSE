#include <iostream>
using namespace std;
int kadane(int arr[], int n)
{
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum = currSum + arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}
int main()
{ // Maxm circular Sub Array sum
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
    int wrapsum, nonwrapsum;
    nonwrapsum = kadane(arr, n);
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum = totalSum + arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totalSum + kadane(arr, n);
    cout << max(wrapsum, nonwrapsum) << endl;
    return 0;
}