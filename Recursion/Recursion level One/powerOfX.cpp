#include<bits/stdc++.h>
using namespace std;
//2^4 = 2*2*2*2 = 2*(2^3) self work 2 multipy and recursive work (y-1)
int powerOfX(int x, int y){
    if(y==0) return 1;
    return powerOfX(x,y-1)*x;
}
int main(){
int x,y;
cout<<"enter x and y value : ";
cin>>x>>y;
cout<<"x raised to the power y is : "<<powerOfX(x,y);

}