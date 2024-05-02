#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "1010";
    int result = 0; 
    for(int i = str.length()-1 ; i>=0 ; i--){
        char a = str[i];
        int num = a-'0';
        result += num << (str.length() - 1 - i);
    }
    cout<<result;

    
    return 0;
}
