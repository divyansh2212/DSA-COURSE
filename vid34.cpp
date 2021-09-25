#include <iostream>
using namespace std;
bool isPowerof2(int n)
{
    return (n && !(n & (n - 1)));
}
int numberOfOnes(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
void subsets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    cout << isPowerof2(16) << endl;
    cout << isPowerof2(0) << endl;
    cout << numberOfOnes(7) << endl;
    int arr[] = {1, 2, 3, 4};
    subsets(arr, 4);
    return 0;
}