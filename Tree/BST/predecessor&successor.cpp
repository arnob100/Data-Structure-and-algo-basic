class Solution
{
    public:
     Node* inPre(Node* root){
        Node* a = root->left;
        while(a->right){
            a = a->right;
        }
        return a;
    }
    Node* inSuc(Node* root){
        Node* b = root->right;
        while(b->left){
            b = b->left;
        }
        return b;
    }
    
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        if(!root) return;

        if(root->key == key){
            if(root->left) pre = inPre(root);
            if(root->right) suc = inSuc(root);
        }
        else if(root->key < key){
            pre = root;
            findPreSuc(root->right, pre, suc, key);
        }
        else {
            suc = root;
            findPreSuc(root->left, pre, suc, key);
        }
    }
};