#include<bits/stdc++.h>
using namespace std;

vector<int> countBits(int n) {
vector<int>ans(n+1,0);
        int count = 0;
        for(int i = 1 ; i<=n ; i++){
             int num = i;
             count = 0;
             while(num>0){
                count++;
                num = num&(num-1);
             }
             ans[i] = count;
             
        }
        return ans;
}

int main(){
    int n = 5;
    vector<int> res = countBits(n);
    for(auto e : res){
        cout << e << " ";
    }
    return 0;
}
