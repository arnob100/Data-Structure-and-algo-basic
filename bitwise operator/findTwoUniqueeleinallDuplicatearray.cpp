class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorResult = 0;
        for(int i = 0; i < nums.size(); i++){
            xorResult ^= nums[i];
        }
        xorResult = (xorResult & (xorResult - 1)) ^ xorResult;

        int bucket1 = 0, bucket2 = 0; 

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] & xorResult){
                bucket1 ^= nums[i];  
            } else {
                bucket2 ^= nums[i];  
            }
        }
        return {bucket1, bucket2};
    }
};
