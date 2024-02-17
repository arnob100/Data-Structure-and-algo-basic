#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
     if(n == 0 || n == 1) return n;
     return fibo(n-1)+fibo(n-2);
}
int main(){
cout<<"enter ith term of fibonacci series : ";
int i;
cin>>i;
int fiboSeries = fibo(i);
cout<<"The ith term term of fibonacci series is : "<<fiboSeries;

}
/*Important note */
/*TC : number of recursive call * time taken in 1 call*/
/*call 1 = 1 call 2 = 2  call 3 = 4 call 4 = 8 call 5 = 16*/
/*2^0, 2^1 , 2^2 , 2^3 , 2^4*....../
/*number of recursive call = total = *2^0, 2^1 , 2^2 , 2^3 , 2^4*......
 using gp = 1(2^n-1)/2-1* =  2^n-1 ~ 2^n */  