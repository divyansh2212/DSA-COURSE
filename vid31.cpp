#include <iostream>
#include <string>
using namespace std;
int main()
{ // Declaration of String
    string str;
    str = "Divyansh Mittal";
    string str1(5, 'D');

    // String Input
    string str2;
    getline(cin, str2);

    // Append two Strings
    string s1 = "fam", s2 = "ily";
    s1.append(s2);
    cout << s1 + s2 << endl;

    // To clear a string
    str.clear();

    // To compare two strings
    string s3 = "abc";
    string s4 = "xyz";
    cout << s4.compare(s3) << endl;

    // Empty Function
    s3.clear();
    if (s3.empty())
    {
        cout << "String is empty." << endl;
    }
    if (!s4.empty())
    {
        cout << "String is not empty." << endl;
    }

    // To erase a string
    str.erase(8, 7);
    cout << str << endl;

    // Find Function
    cout << str.find("ivy") << endl; // Returns index

    // Insert function
    str.insert(0, "The");
    cout << str << endl;

    // Length of the String
    cout << str.length() << endl;
    cout << str.size() << endl;

    // Sub-String
    string l = str.substr(9);
    cout << l << endl;

    // String to int
    string f = "786";
    int x = stoi(f);
    cout << x << endl;
    cout << to_string(x) + "2" << endl;
    return 0;
}