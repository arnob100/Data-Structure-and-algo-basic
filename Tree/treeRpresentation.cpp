#include<bits/stdc++.h>
using namespace std; 
class Node {
public:
    int data;
    Node *left, *right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

int main() {
    queue<Node*> q;
    cout << "Enter root node : ";
    int x;
    cin >> x;
    Node *root = new Node(x);
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        cout << "Enter the value of left child for node " << temp->data << " (-1 if none): ";
        q.pop();
        cin >> x;
        if (x != -1) {
            temp->left = new Node(x);
            q.push(temp->left);
        }

        cout << "Enter the value of right child for node " << temp->data << " (-1 if none): ";
        cin >> x;
        if (x != -1) {
            temp->right = new Node(x);
            q.push(temp->right);
        }
    }

    return 0; 
}
