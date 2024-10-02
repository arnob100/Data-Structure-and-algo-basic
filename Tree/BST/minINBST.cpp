class Solution {
public:
    int minValue(Node* root) {
        if (root == nullptr) {
            return 0;
        }
        int mini = root->data;
        while (root!= NULL) {
            mini = min(mini, current->data);
            root = root->left;
        }
        return mini;
    }
};
