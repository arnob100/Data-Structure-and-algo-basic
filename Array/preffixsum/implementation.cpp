#include<bits/stdc++.h>
using namespace std;
//TC : n SC : extra space
/* void preffixSum(int arr[] , int n){
     int preSum = 0;
     vector<int>res;
     res.push_back(arr[0]);
     for(int i = 1 ; i<n ; i++){   
     preSum = res[i-1] ;   
     res.push_back(arr[i] + preSum);
     }
     for(int i = 0 ; i<res.size() ; i++){
        cout<<res[i]<<" ";
     }
} */
//better approach (no extra space)
void preffixSum(int arr[] , int n){
     int preSum = 0;
     vector<int>res;
     arr[0] = arr[0];
     for(int i = 1 ; i<n ; i++){   
      int preSum = arr[i-1];
      arr[i] = arr[i] + preSum;
     }
     for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
     }
}
int main(){
int arr[] = {1,4,5,6};
int size = sizeof(arr)/sizeof(arr[0]);
preffixSum(arr,size);
}