class Solution {
public:
    TreeNode* a = NULL;
    bool flag = true;
    void validateBST(TreeNode* root){
         if(root== NULL) return;
         validateBST(root->left);
         if(a != NULL && root->val <= a->val) {
             flag = false;
             return; //this return will give early stop from reversal;
         }
         a = root;
         validateBST(root->right);
    }
    bool isValidBST(TreeNode* root) {
         validateBST(root);
         return flag;
    }
};
