class Solution {
public:
    bool isPrime(int n){
        if(n==1)return false;
        for(int i = 2 ; i<=sqrt(n);i++){
            if(n%i==0)return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();int maxe= INT_MIN;
        for(int i = 0 ; i<n;i++){
            if(isPrime(nums[i][i])){
               maxe = max(maxe,nums[i][i]);
            }
        }
        for(int i = n-i-1 ; i>=0 ;i--){
            if(isPrime(nums[i][i])){
               maxe = max(maxe,nums[i][i]);
            }
        }
        return maxe;
    }
};