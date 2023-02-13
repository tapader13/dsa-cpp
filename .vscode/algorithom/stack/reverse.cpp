#include <iostream>
#include <stack>
using namespace std;
int main()
{

    void reverseStack(stack<int> stack)
    {
        if (stack.empty())
        {
            return;
        }
        int val = stack.top();
        stack.pop();
        reverseStack(stack);
        addBottom(stack, val);
    }
    void addBottom(stack<int>& stack,int value)
    {
        if (stack.empty())
        {
            stack.push(value);
            return;
        }
        int val = stack.top();
        stack.pop();
        addBottom(stack, value);
        stack.push(val);
    }
   
}

// int main()
// {
//     string str = "minhaj";
//     stack<char> s;
//     for (int i = 0; i < str.length(); i++)
//     {
//         char ch = str[i];
//         s.push(ch);
//     }
//     string st = "";
//     while (!s.empty())
//     {
//         char ch = s.top();
//         st.push_back(ch);
//         s.pop();
//     }
//     cout << "reverse value is " << st;
//

// #include <bits/stdc++.h>
// bool findRedundantBrackets(string &s)
// {
//     stack<char> st;
//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
//         if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
//         {
//             st.push(ch);
//         }
//         else
//         {
//             if (ch == ')')
//             {
//                 bool redundant = true;
//                 while (st.top() != '(')
//                 {
//                     char top = st.top();
//                     if (top == '+' || top == '-' || top == '*' || top == '/')
//                     {
//                         redundant = false;
//                     }
//                     st.pop();
//                 }
//                 if (redundant == true)
//                 {
//                     return true;
//                 }
//                 st.pop();
//             }
//         }
//     }
//     return false;
// }