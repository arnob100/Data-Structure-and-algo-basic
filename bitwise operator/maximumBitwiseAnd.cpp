class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int maxe=INT_MIN,ans=0,count=0;
        for(int i = 0 ; i<nums.size() ; i++){
            maxe = max(nums[i],maxe);
        }
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==maxe){
                count++;
            }
            else{
                count=0;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};
