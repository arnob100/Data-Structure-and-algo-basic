#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,1,0,1,1,1,0,0,1,1,1,0,0,0,1,1,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int flip =0;
    int i ,j; i=j = 0;int maxlen = INT_MIN;
    while(j<n){
        if(arr[j] == 1){
            j++;
        }else{
            if(flip<k){
                flip++;j++;
            }
            else{
             maxlen = max(maxlen,j-i);
             while(arr[i]==1)i++;
             i++;j++;
            }
        }
    }
    maxlen = max(maxlen,j-i);
    cout<<maxlen;
}