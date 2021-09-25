#include <iostream>
using namespace std;
int main()
{
    // To check if a palindrome
    cout << "Enter the length of the word:" << endl;
    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr;
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] != arr[n - i - 1])
        {
            cout << "\nWord is not palindrome!" << endl;
            return 0;
        }

        i++;
    }
    cout << "\nWord is palindrome!";
    return 0;
}