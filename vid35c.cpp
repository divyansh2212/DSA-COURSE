#include <iostream>
using namespace std;
int setbit(int n, int i)
{
    return (n | (1 << i));
}
int getBit(int n, int i)
{
    return ((n & (1 << i)) != 0);
}
int uniqueOf3(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j], i) == 1)
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = setbit(result, i);
        }
    }
    return result;
}
int main()
{
    int arr[] = {1, 3, 2, 1, 3, 2, 2, 3, 5, 1};
    cout << uniqueOf3(arr, 10);
    return 0;
}