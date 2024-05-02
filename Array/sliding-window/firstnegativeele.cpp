#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {-12,-1,-7,8,-15,30,16,28};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;int pointer = -1;
    int ans[n];
    for(int i = 0; i<k;i++){
        if(arr[i]<0)pointer = i;break;
    }
    if(pointer == -1)ans[0] =1;
    else ans[0] = arr[pointer];
    int i = 1;int j = k;
    while(j<n){
        //if i stands before pointer
        if(pointer>=i){
            ans[i] = arr[pointer];
        }//
        else{
            int x ;
            pointer=-1;
            for(x = i ; x<=j ; x++){
                if(arr[x]<0)pointer = x;break;
            }
            if(pointer != -1)ans[i] = arr[pointer];
            else ans[i] =1;
        }i++;j++;
    }
    for(int i = 0 ; i<n ; i++){
        cout<<ans[i]<<" ";
    }
     
}