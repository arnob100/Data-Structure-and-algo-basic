
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    if(m!=n)cout<<"not possible ";
    int arr[m][n];
    for(int i = 0 ; i<m ; i++){
       for(int j = 0 ; j<n ; j++){
           cin>>arr[i][j];
       }    
    }
    for(int i = m-1 ; i>=0 ; i--){
       for(int j = 0 ; j<n ; j++){
          cout<<arr[j][i]<<" ";
       }
       cout<<endl;
    }
    

    return 0;
}