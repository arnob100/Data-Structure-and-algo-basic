
class Solution {
public:
//recursive
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL ||root->val==val)return root;
        else if(root->val>val)return searchBST(root->left,val);
        else return searchBST(root->right,val);
    }
};
//level order 
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while (root != nullptr && root->val != val) {
            if (root->val < val)
                root = root->right;
            else
                root = root->left;
        }
        return root;
    }
};
