#include <iostream>
using namespace std;
bool sortedArray(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }

    return (arr[0] < arr[1] && sortedArray(arr + 1, n - 1));
}
int main()
{
    int arr[] = {1, 2, 3, 4, 8, 6, 7};
    cout << sortedArray(arr, 7);
    return 0;
}