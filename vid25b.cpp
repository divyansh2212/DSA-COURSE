#include <iostream>
using namespace std;
int main()
{
    // Maxm Sub-Array sum using o(n3)
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
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currSum = 0;
            for (int k = i; k <= j; k++)
            {
                currSum = currSum + arr[k];
            }
            maxSum = max(maxSum, currSum);
        }
    }
    cout << "The maxm sum of the sub array is " << maxSum << endl;
    return 0;
}