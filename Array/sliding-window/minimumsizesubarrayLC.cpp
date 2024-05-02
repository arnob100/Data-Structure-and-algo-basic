class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i,j; i = j = 0;
        int window = INT_MAX;
        int n = nums.size();
        int len;int sum = 0;
        for(int i = 0 ; i<n ; i++){
          sum+=nums[i];
        }
        if(sum<target)return 0;
        sum = 0;
        i=0;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                len = j-i+1;
                window = min(window,len);
                sum -= nums[i];
                i++;
            }
            j++;
        }
        return window;
    }
};