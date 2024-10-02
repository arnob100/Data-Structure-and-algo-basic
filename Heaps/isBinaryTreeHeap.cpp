#include <iostream>
using namespace std;

// Node structure for a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
public:
    // Function to count the number of nodes in the binary tree
    int count(Node* root) {
        if (!root) return 0;
        return 1 + count(root->left) + count(root->right);
    }

    // Function to check if the binary tree is a complete binary tree (CBT)
    bool CBT(Node* root, int nodec, int idx) {
        if (!root) return true;
        if (idx >= nodec) return false;
        return CBT(root->left, nodec, 2 * idx + 1) && CBT(root->right, nodec, 2 * idx + 2);
    }

    // Function to check if the binary tree satisfies the heap property (max-heap)
    bool checkHeap(Node* root) {
        if (!root) return true;
        
        // Check max-heap property for the left child
        if (root->left && root->data < root->left->data) return false;
        
        // Check max-heap property for the right child
        if (root->right && root->data < root->right->data) return false;

        // Recursively check for left and right subtrees
        return checkHeap(root->left) && checkHeap(root->right);
    }

    // Function to check if the binary tree is a max-heap
    bool isHeap(Node* root) {
        // Count the number of nodes in the tree
        int nodeCount = count(root);
        
        // Check if the tree is a complete binary tree
        if (!CBT(root, nodeCount, 0)) {
            return false;
        }
        
        // Check if the tree satisfies the heap property (max-heap)
        if (!checkHeap(root)) {
            return false;
        }
        
        return true;
    }
};

int main() {
    Node* root = new Node(10);
    root->left = new Node(9);
    root->right = new Node(8);
    root->left->left = new Node(7);
    root->left->right = new Node(6);
    root->right->left = new Node(5);

    Solution sol;
    if (sol.isHeap(root)) {
        cout << "The binary tree is a max-heap." << endl;
    } else {
        cout << "The binary tree is not a max-heap." << endl;
    }

    return 0;
}
