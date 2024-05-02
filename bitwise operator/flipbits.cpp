#include<bits/stdc++.h>
using namespace std;

int flip_bits(int num){
    int temp = 0;
    int num1 = num;
    while(num>0){
        temp = num;
        num = num&(num-1);
    }
    temp = (temp << 1) - 1;
    num = num1 ^ temp;
    return num;
}

int main(){
    int n = 24;
    int x = flip_bits(n);
    cout << x;
    return 0;
}
