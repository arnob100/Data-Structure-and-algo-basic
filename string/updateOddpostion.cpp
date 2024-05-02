#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"enter string : ";
    cin>>str;
    int n = str.length();
    int i = 0;
    while(n--){
    if(i%2==1){
        str[i] = '#';
    } 
    i++;
    }
    cout<<str;

}