#include <iostream>
#include <climits>
using namespace std;
int main()
{ // To print max and min number in an array
    int n;
    cout << "Enter the size of the array:\n";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, array[i]);
        minNo = min(minNo, array[i]);
    }
    cout << maxNo << endl;
    cout << minNo << endl
         << endl;

    // Sum of an array
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    cout << "The sum of this array is " << sum << endl;
    return 0;
}