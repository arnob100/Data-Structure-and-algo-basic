#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"enter the string : ";
    cin>>str;
    int n = str.length();
    string first = str.substr(0,n/2);//second index is upto before n/2arnob
    string second  = str.substr(n/2);
    //second = string(second.rbegin(),second.rend());[same working procedure]
    reverse(second.begin(),second.end());
    cout<<first+second;
} 