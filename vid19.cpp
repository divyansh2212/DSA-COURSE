// Linear and Binary Search in array

#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
    }
    return -1;
}
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the size of the Array:\n";
    cin >> n;
    int arr[n];
    cout << "Input the elements in this array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key, input;
    cout << "Enter the keyword you want to search in an array:\n";
    cin >> key;
    cout << "Enter the search which you want to do:\n1. Linear Search\n2. Binary Search\n";
    cin >> input;
    switch (input)
    {
    case 1:
        cout << linearSearch(arr, n, key);
        break;
    case 2:
        cout << binarySearch(arr, n, key);
        break;

    default:
        break;
    }
    return 0;
}