void preffixSum(int arr[] , int n){
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
}