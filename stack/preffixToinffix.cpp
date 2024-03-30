#include<bits/stdc++.h>
using namespace std; 
int main(){
    stack<int>st;
    string str = "-9/*+5346";
    for(int i = str.length()-1 ; i >=0  ; i--){
        char ch = str[i];
        //char return a ascci val
        int ascii = (int)ch;
        if(ascii >=48 && ascii <= 57){
             st.push(ascii-48);
        }
        else{
            if(!st.empty()){
             
             int val1 = st.top(); st.pop();
             int val2 = st.top();st.pop();
             if(ch=='+')st.push(val1+val2);
             if(ch=='-')st.push(val1-val2);
             if(ch=='*')st.push(val1*val2);
             if(ch=='/')st.push(val1/val2);
        }
    }}
    cout<<st.top();
}