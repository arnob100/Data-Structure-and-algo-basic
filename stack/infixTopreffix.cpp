#include <bits/stdc++.h>
using namespace std;
int main() {
    string str = "9-(5+3)*4/6";
    stack<string> c;  // Stack to hold operands (converted to strings)
    stack<char> op;    // Stack to hold operators

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        int ascii = (int) ch;

        if (ascii >= '0' && ascii <= '9') {
            c.push(string(1,ch)); 
        } else if (op.size() == 0 || ch == '(' || op.top() == '(') {
            op.push(ch);
        } else if (ch == ')') {
            while (op.top() != '(') {
                string s2 = c.top();
                c.pop();
                string s1 = c.top();
                c.pop();
                string c1 = string(1,op.top());
                op.pop();
                string t = c1 + s1 + s2;  // Create prefix expression
                c.push(t);
            }
            op.pop();  // Remove the opening parenthesis from operator stack
        } else {
            if (ch == '+' || ch == '-') {
                // Process lower precedence operators (+, -)
                string s2 = c.top();
                c.pop();
                string s1 = c.top();
                c.pop();
                string c1 = string(1,op.top());
                op.pop();
                string t = c1 + s1 + s2; // Create prefix expression
                c.push(t);
                op.push(ch);
            } else if (ch == '*' || ch == '/') {
                // Process higher precedence operators (*, /)
                if (op.top() == '*' || op.top() == '/') {
                    string s2 = c.top();
                    c.pop();
                    string s1 = c.top();
                    c.pop();
                    string c1 = string(1,op.top());
                    op.pop();
                    string t = c1 + s1 + s2; // Create prefix expression
                    c.push(t);
                } else {
                    op.push(ch);
                }
            }
        }
    }

    while (!op.empty()) {
        // Evaluate the remaining expression in the operand stack
        string s2 = c.top();
        c.pop();
        string s1 = c.top();
        c.pop();
        string c1 = string(1,op.top());
        op.pop();
        string t = c1 + s1 + s2; // Create prefix expression
        c.push(t);
    }

    cout << c.top();  // Print the final result (prefix expression)
    return 0;
}
