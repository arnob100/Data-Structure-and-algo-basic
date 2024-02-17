#include<bits/stdc++.h>
using namespace std;
void fiboSeries(int n, int a , int b){ 
    if(n == 0) return;      // protibar b= a+b er value a te push korsi 
    cout<<a;                 // 1st a= 0 b =1 ; //a= 0
    fiboSeries(n-1,b,a+b);   // 2nd a = 1 , b = 0+1//a= 1
}                            // 3rd a = 1 , b = 1 //a =1 b =2 
                             // 4th a = 2 , b = 1+2 = 3// a = 2 b = 3
int main(){                  // 5th a = 3 , b = 2+3 = 5// a = 3 b = 5
                             // 6th a = 5 , b = 3+5 = 8 // a = 5 b = 8
                             // 7th a = 8 , b = 5+8 = 13 // a = 8, b = 13
                             // 8th a = 13  b = 8+13 = 21
cout<<"enter ith term of fibonacci series : ";
int i;
cin>>i;
int a = 0; int b = 1;
fiboSeries(i,a,b);
}
/*Important note */
/*TC : number of recursive call * Time taken in 1 call = n*c = n */