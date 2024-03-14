#include<bits/stdc++.h>
using namespace std;
int sumOfDigit(int n){
    if(n>=0 && n<=9)return n;//this condition stats it contains single digit
    return sumOfDigit(n/10)+n%10;
                    //1 2 3 4 
                    //1 2 3       4
                    //1 2       3 4
                    //1       2 3 4
                    //1+2 return  3 
                    //3+3 return  6
                    //6+4 return 10
}
int main(){
int n ;
cout<<"enter n : ";
cin>>n;
cout<<"sum of digit : "<<sumOfDigit(n);
}