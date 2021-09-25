#include <iostream>
using namespace std;
int main()
{ // Sum of all Sub-Arrays
    int n;
    cout << "Enter no of elements in the array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            curr = curr + arr[j];
            cout << curr << " ";
        }
    }

    return 0;
}