#include <iostream>
using namespace std;
int unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}
int main()
{
    int arr[] = {1, 8, 5, 2, 5, 8, 1};
    cout << unique(arr, 7);
    return 0;
}