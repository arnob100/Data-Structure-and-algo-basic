#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    void inOrder(Node* root, vector<int>& arr) {
        if (!root) return;
        inOrder(root->left, arr);
        arr.push_back(root->data);
        inOrder(root->right, arr);
    }

    void preOrder(Node* root, vector<int>& arr, int& i) {
        if (!root) return;
        root->data = arr[i++];
        preOrder(root->left, arr, i);
        preOrder(root->right, arr, i);
    }

    void convertToMaxHeapUtil(Node* root) {
        vector<int> arr;
        inOrder(root, arr); 
        int i = 0;
        preOrder(root, arr, i);
    }
};
