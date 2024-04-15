#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int maxsum = INT_MIN;
    int maxidx = -1;int j;
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;//total subarray 9-3 = 6
    for(int i = 0 ; i<n-k ; i++){
        int sum = 0;
        for( j = i  ; j<i+k ; j++){
            sum += arr[j];
        }
        maxsum = max(maxsum,sum);
        maxidx = j-k;
    }
    cout<<maxsum<<" index : "<<maxidx;
}