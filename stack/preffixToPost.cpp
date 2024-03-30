#include<bits/stdc++.h>
using namespace std; 
int main(){
    stack<string>st;
    string str = "-9/*+5346";
    for(int i = str.length()-1 ; i>=0  ; i--){
        //converting ch to string 1 means 1 char string
        st.push(string(1, ch));
        //char return a ascci val
        int ascii = (int)ch;
        if(ascii >=48 && ascii <= 57){
             st.push(ch+'');
        }
        else{
            if(!st.empty()){
             
             string val1 = st.top(); st.pop();
             string val2 = st.top();st.pop();
             string stc = val1+val2+ch;
             st.push(stc);
        }

    }}
    cout<<st.top();
}