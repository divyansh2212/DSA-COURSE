#include <iostream>
using namespace std;
float add(float a, float b)
{
    float sum = a + b;
    return sum;
}
int main()
{
    // Adding 2 numbers using functions
    float num1, num2;
    cout << "Enter the first number:\n";
    cin >> num1;
    cout << "Enter the second number:\n";
    cin >> num2;
    cout << "The sum of these numbers is " << add(num1, num2) << endl;
    return 0;
}