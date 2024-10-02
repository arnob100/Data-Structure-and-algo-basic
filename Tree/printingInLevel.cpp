#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* right;
    Node* left;
    Node(int val) {
        this->val = val;
        right = left = NULL;
    }
};

void displayTree(Node* root) {
    if (root == NULL) return;
    cout << root->val << " ";
    displayTree(root->left);
    displayTree(root->right);
}

int findLevel(Node* root) {
    if (root == NULL) return 0;
    int left = findLevel(root->left);
    int right = findLevel(root->right);
    return 1 + max(left, right);
}

void printElementInLevel(Node* root, int level, int cur) {
    if (root == NULL) return;
    if (level == cur) cout << root->val << "->"; 
    printElementInLevel(root->left, level, cur + 1);
    printElementInLevel(root->right, level, cur + 1);
}

void level(Node* root) {
    int l = findLevel(root);
    for (int i = 1; i <= l; i++) {
        printElementInLevel(root, i, 1);
        
        
    }
}

int main() {
    Node *root = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    root->left = b;
    root->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    displayTree(root);
    cout << endl;

    int height = findLevel(root);
    cout << "height of tree: " << height << endl;

    level(root);

    return 0;
}
