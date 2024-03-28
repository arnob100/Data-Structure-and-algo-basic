#include<bits/stdc++.h>
using namespace std;
//Time complexity big o of N
int main(){
    int arr[] = {3, 4, 2, 5, 6, 9, 12, 15, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans(size, 0);
    stack<int>st;
    for(int i = size - 1 ; i >=0 ; i--){
      while(!st.empty() && arr[i] > st.top()){
         st.pop();          
      }
      if(st.empty()){
          ans[i] = -1;
      }
      else{
          ans[i] = st.top();
      }
      st.push(arr[i]);
    }
    for(auto e : ans){
        cout<<e << " ";
    }
}
/* 
#include<bits/stdc++.h>
using namespace std;
//Time complexity big o of N
int main(){
    int arr[] = {3, 4, 2, 5, 6, 9, 12, 15, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans(size, 0);
    stack<int>st;
    for(int i = size - 1 ; i >=0 ; i--){
      while(!st.empty() && arr[i] > arr[st.top()]){
         st.pop();          
      }
      if(st.empty()){
          ans[i] = -1;
      }
      else{
          ans[i] = arr[st.top()];
      }
      st.push(i);
    }
    for(auto e : ans){
        cout<<e << " ";
    }
} */