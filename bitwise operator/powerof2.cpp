#include<bits/stdc++.h>
using namespace std;
bool powerOfX(int n){
    int setbit = 0;
    while(n>0){
    n=n&(n-1);    
    setbit++;
    }
    if(setbit==1)return true;
    else return false;
}
int pow_of_x_less_than_k(int n){
    int temp;
    while(n>0){
    temp = n;
    n=n&(n-1);    
    }
    return temp;
}
int main(){
    int num= 16;
    cout<<powerOfX(num)<<endl;
    int n = 24;
    int x = pow_of_x_less_than_k(n);
    cout<<x;
}