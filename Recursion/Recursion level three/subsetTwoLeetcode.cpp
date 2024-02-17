class Solution {
public:
    void helper(vector<vector<int>>& final, vector<int>& ans, vector<int>& nums, int index) {
        final.push_back(ans);
        for (int i = index; i < nums.size(); i++) {
            if (i > index && nums[i] == nums[i - 1]) {
                continue;
            }
            ans.push_back(nums[i]);
            helper(final, ans, nums, i + 1);
            ans.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> final;
        vector<int> ans;
        sort(nums.begin(), nums.end());
        helper(final, ans, nums, 0);
        return final;
    }
};

/*
      Root Node
                        []
                        / \
                      /     \
                   Level 1   Level 1
                [1]         [2]
                / \         / \
              /     \     /     \
          Level 2  [1, 3] Level 2 [2, 2]
         /  \       /       / \
       /     \     /       /     \
  Level 3 [1, 2, 3]   Level 3 [2, 2, 3]
            /  \         /
         /     \       /
       Leaf   Leaf    Level 4
 [1, 2, 2, 3] [2, 3]
                      \
                       Leaf
                          [3]
*/