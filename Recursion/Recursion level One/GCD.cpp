#include<bits/stdc++.h>
using namespace std;
int gcd(int x , int y){
    if(y == 0) return x;
    return gcd(y,x%y);
}
int main()
{
int x = 24 ;
int y = 15 ;
cout<<"The gcd of x and y is : "<<gcd(x,y);
}