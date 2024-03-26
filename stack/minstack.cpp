#include<bits/stdc++.h>
using namespace std;
void minstack(int arr[], int size){
 stack<int>min_st;
 min_st.push(arr[0]);
 for(int i = 0 ; i<size ; i++){
    min_st.push(min(min_st.top(),arr[i]));
    cout<<min_st.top()<<" ";
 }
}

int main(){
    int arr[] = {4,5,2,4,5,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    minstack(arr,size);
}