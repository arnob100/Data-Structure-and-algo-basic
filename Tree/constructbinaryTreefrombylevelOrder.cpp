#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void levelOrderTraversal(Node* root) {
    if (root == NULL)
        return;
    
    vector<vector<int>> res;
    queue<Node*> q;
    q.push(root);

    
        res.push_back(levelNodes);
    }

    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
Node* construct(int arr[], int n) {
    if (n == 0)
        return NULL;

    Node* root = new Node(arr[0]);
    queue<Node*> q;
    q.push(root);
     int i = 1; int j = 2;
  while(!q.empty()&& j<n){
        Node *temp  = q.front();
        q.pop();
        Node *l;
        Node *r;
        
        if(arr[i]!=INT_MIN)l=new Node(arr[i]);
        else l = NULL;

         if(j<n && arr[j]!=INT_MIN)r=new Node(arr[j]);
        else r = NULL;

        temp->left = l; temp->right = r;
        if(l)q.push(l);
        if(r)q.push(r);
        i+=2; j+=2;

  }

    return root;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, INT_MIN, 6, INT_MIN, INT_MIN, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    Node* root = construct(arr, size);
    levelOrderTraversal(root);
    return 0;
}
