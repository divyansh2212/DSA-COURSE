#include <iostream>
using namespace std;
int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
void unique2(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int rightSetBit = 0, pos = -1;
    while (rightSetBit == 0)
    {
        rightSetBit = tempxor & 1;
        pos++;
        tempxor = tempxor >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (getBit(arr[i], pos) == 1)
        {
            newxor = newxor ^ arr[i];
        }
    }
    cout << newxor << endl;
    cout << (newxor ^ xorsum) << endl;
}
int main()
{
    int arr[] = {1, 5, 8, 9, 5, 8, 1, 10};
    unique2(arr, 8);
    return 0;
}