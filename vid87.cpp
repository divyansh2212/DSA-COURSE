// Redundant Paranthesis
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string s = "((a*b) + (c*d))";
    stack<char> st;
    bool ans = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {
                ans = true;
            }

            while (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
            {
                st.pop();
            }
            st.pop();
        }
    }
    cout << ans << endl;
    return 0;
}