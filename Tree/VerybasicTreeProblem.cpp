#include<bits/stdc++.h>
using namespace std;
class Node{
public:    
    int val;
    Node* right;
    Node* left;
    Node(int val){
        this->val=val;
        right=left=NULL;
    }
};
void displayTree(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

int sum(Node* root){
    if(root==NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}

int greatestNode(Node* root){
    if(root == NULL) return INT_MIN;
    
    int maxi = root->val;
    int left = greatestNode(root->left);
    int right = greatestNode(root->right);
    
    maxi = max(maxi, max(left, right));
    
    return maxi;
}
int findLevel(Node* root){
    if(root==NULL)return 0;
    int left = findLevel(root->left);
    int right = findLevel(root->right);
    
    int level ;
    return level = 1+max(left,right);
    
}
void printElementInLevel(Node* root,int level,int cur){
     if(level==0)return; 
     if(level==1)cout<<root->val<<"-";
     printElementInLevel(root->left,level-1,cur+1);
     printElementInLevel(root->right,level-1,cur+1);
}
int main(){
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
    
    int x = sum(root);
    cout << "Sum of all nodes: " << x << endl;
    
    int maxNode = greatestNode(root);
    cout << "Greatest node value: " << maxNode << endl;
    
    int height = findLevel(root);cout<<"height of tree : " <<height<< endl;

    printElementInLevel(root,2,0);
    return 0;
}
