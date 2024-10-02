class Solution {
public:
    void helper(TreeNode*& node, vector<int>& nums, int lo, int hi) {
        if (lo > hi) return;
        int mid = lo + (hi - lo) / 2;
        node = new TreeNode(nums[mid]);
        helper(node->left, nums, lo, mid - 1);
        helper(node->right, nums, mid + 1, hi);
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root = nullptr;
        helper(root, nums, 0, nums.size() - 1);
        return root;
    }
};
