#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "arnob";
    int n = str.length();
    int i = 0;int count = 0;
    while(n--){
    //checking in every index whether there present any vowel or not    
    if(str[i]!='a' and str[i] != 'e' and str[i] !='i' and str[i] != 'o' and str[i] != 'u' ){
    count++; 
    }
    i++;
    }
    cout<<count;

}