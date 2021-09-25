#include <iostream>
using namespace std;
int main()
{
    // To find and print largest word in an array
    cout << "Enter the length of the sentence:" << endl;
    int n;
    cin >> n;
    getchar();
    char arr[n + 1];
    cout << "Enter the sentence:" << endl;
    cin.getline(arr, n);
    getchar();
    int maxLen = 0, currLen = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        currLen++;
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            maxLen = max(maxLen, currLen);
            currLen = 0;
        }
    }
    cout << maxLen;
    return 0;
}