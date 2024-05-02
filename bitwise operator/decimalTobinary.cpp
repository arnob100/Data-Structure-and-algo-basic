#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 15;
    string str;
    while(num>0){
       
       if(num%2==0){
         str+='0';
       }
       else{
        str+='1';
       }
       num=num>>1;//it means dividing it by two
    }
    cout<<str;
        
    return 0;
}
