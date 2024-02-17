//write a program that prints number of ways to reach at the top of stair
//he/she can jump 1/2/3 steps.
#include<bits/stdc++.h>
using namespace std;
int stairPath(int n){
     if(n == 1 || n == 2 ) return n;
     if(n == 3) return 4;
     return stairPath(n-1)+stairPath(n-2)+stairPath(n-3);
}
int main(){
cout<<"Enter length of the stair : ";
int i;
cin>>i;
int stairs = stairPath(i);
cout<<"Number of possible ways to reach top of the stair : "<<stairs;
}