#include <iostream>
using namespace std;
struct Node {
    int val;
    Node *left, *right;
    Node(int value) : val(value), left(nullptr), right(nullptr) {}
};

void pathSum(Node* root, int sum, int& ans) {
    if (root == nullptr) return;
    if (sum == root->val) ans++;
    sum -=root->val;
    pathSum(root->left, sum , ans);
    pathSum(root->right, sum , ans);
}

int main() {
    int ans = 0; // Initialize ans to zero
    Node *root = new Node(5);
    Node *b = new Node(1);
    Node *c = new Node(3);
    Node *d = new Node(3);
    Node *e = new Node(2);
    Node *f = new Node(0);
    root->left = b;
    root->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    pathSum(root, 8, ans);
    cout << "The ans is : " << ans << endl;
    return 0;
}
