#include<bits/stdc++.h>
using namespace std; 
int main(){
    stack<string>st;
    string str = "953+4*6/-";
    for(int i = 0 ; i<str.length()  ; i++){
        //converting ch to string 1 means 1 char string
        char ch = str[i];
        //char return a ascci val
        int ascii = (int)ch;
        if(ascii >=48 && ascii <= 57){
             st.push(string(1, ch));
        }
        else{
            if(!st.empty()){
             string val2 = st.top(); st.pop();
             string val1 = st.top(); st.pop();
             string stc = "("+val1+ch+val2+")";
             st.push(stc);
        }

    }}
    cout<<st.top();
}