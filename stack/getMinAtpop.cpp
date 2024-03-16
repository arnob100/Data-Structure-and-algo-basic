#include<bits/stdc++.h>
using namespace std;
stack<int> _push(int arr[],int n)
{
  
   stack<int>st;
   for(int i = 0 ; i< n ; i++){
       if(st.empty()){
         st.push(arr[i]);  
       }else{
         st.push(min(st.top(),arr[i]));  
       }
   }return st;
}
void _getMinAtPop(stack<int>s)
{
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main(){
    int arr[] = {1,2,3,4,5,0,4,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    stack<int>st = _push(arr,n);
    _getMinAtPop(st);
}