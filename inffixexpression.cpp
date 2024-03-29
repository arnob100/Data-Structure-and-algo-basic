#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "9-(5+3)*4/6";
    stack<int> c;
    stack<int> op; // Changed from stack<char> to stack<int> to hold ASCII values
    
    for(int i = 0 ; i < str.length() ; i++){
        char ch = str[i];
        int ascii = (int)ch;
        
        if(ascii >= '0' && ascii <= '9'){
            c.push(ascii - '0');
        }
        else if(op.size() == 0 || ch == '(' || op.top() == '('){
            op.push(ch); // Pushing ASCII value of operator
        }
        else if(ch == ')'){
            while(op.top() != '('){
                int val2 = c.top();c.pop(); 
                int val1 = c.top();c.pop();
                if(op.top() == '+') c.push(val1 + val2);
                if(op.top() == '-') c.push(val1 - val2);
                if(op.top() == '*') c.push(val1 * val2);
                if(op.top() == '/') c.push(val1 / val2);
                op.pop();//removing inner operator
            } 
            op.pop(); // removing  opening bracket
        }
        else {
            if(ch == '+' || ch == '-' ){
                int val2 = c.top();c.pop(); // Pop from operand stack
                int val1 = c.top();c.pop();
                if(op.top() == '+') c.push(val1 + val2);
                if(op.top() == '-') c.push(val1 - val2);
                if(op.top() == '*') c.push(val1 * val2);
                if(op.top() == '/') c.push(val1 / val2);
                op.pop();
                op.push(ch); // Pushing ASCII value of operator
            }
            if(ch == '*' || ch == '/'){
                if(op.top() == '*' || op.top() == '/'){
                    int val2 = c.top(); c.pop();
                    int val1 = c.top(); c.pop();
                    if(op.top() == '*') c.push(val1 * val2);
                    if(op.top() == '/') c.push(val1 / val2);
                    op.pop();
                }
                op.push(ch); // Pushing ASCII value of operator
            }
        }
    }
    
    while(c.size()>1){ // while(!op.empty()) is same
        int val2 = c.top(); c.pop();
        int val1 = c.top(); c.pop();
        if(op.top() == '+') c.push(val1 + val2);
        if(op.top() == '-') c.push(val1 - val2);
        if(op.top() == '*') c.push(val1 * val2);
        if(op.top() == '/') c.push(val1 / val2);
        op.pop();
    }
    
    cout << c.top();
    return 0;
}
