#include <iostream>
using namespace std;

int main()
{
    // Simple Calculator using switch
    float a, b;
    char op;
    cout << "Input 2 numbers:\n";
    cin >> a >> b;
    cout << "Enter an operator you want to use:\n";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;

    default:
        cout << "Please enter the valid operator!";
        break;
    }

    // Checking whether the alphabet is a vowel or a consonant
    char alphabet;
    cout << "Please enter the valid alphabet:\n";
    cin >> alphabet;
    switch (alphabet)
    {
    case 'a':
        cout << "It is a vowel!";
        break;
    case 'e':
        cout << "It is a vowel!";
        break;
    case 'i':
        cout << "It is a vowel!";
        break;
    case 'o':
        cout << "It is a vowel!";
        break;
    case 'u':
        cout << "It is a vowel!";
        break;

    default:
        cout << "It is a consonant!";
        break;
    }
    return 0;
}