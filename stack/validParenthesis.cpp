#include<bits/stdc++.h>
using namespace std;
bool check(string &str){
    int count = 0 ; 
    for(int i = 0 ; i< str.size() ; i++){
        if(str[i] == '('){count++;}
        else{count--;}
    }
    if(count == 0 )return 1;
    else return 0;
}
int main(){
    string str = "((())())";
    cout<<check(str);
}
/*//another approach 
#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
bool validParanthesis(string &str) {
    stack<char> st;
    for(int i = 0  ;i < str.size() ; i++){
        if (str[i] == '(') {
            st.push(str[i]);
        }
        else {
            if (st.empty()) {
                return 0;
            }
            else {
                st.pop();
            }
        } 
    }
    return st.empty();
}

int main() {
    string str = "(((())))";
    cout << validParanthesis(str);
    return 0;
}
 */