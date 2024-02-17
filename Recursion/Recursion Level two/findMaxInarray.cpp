#include<bits/stdc++.h>
using namespace std;
int findMax(int arr[] , int size , int max , int index){
      if(index >= size)return max;
      if(arr[index] >= max){max = arr[index];}
      return findMax(arr, size , max , index+1);
}
int main(){
int arr[] = {1,2,4,8,5,6};
int size = sizeof(arr)/sizeof(arr[0]);
int max  = INT_MIN;
int x = findMax(arr, size , max , 0);
cout<<"The max element is : "<<x;
}