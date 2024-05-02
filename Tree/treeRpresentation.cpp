#include<bits/stdc++.h>
using namespace std; 
class Node{
public:
    int data;
    Node *left,*right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

int main(){
    queue<Node*>q;
    cout<<"Enter root node : ";
    int x; 
    cin>>x;
    Node *root = new Node(x);
    q.push(root);

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        cout<<"Enter the left child of "<<temp->data<< " : "; 
        cin>>x;
        if(x!=-1){
            temp->left = new Node(x);  
            q.push(temp->left);
        }  

        cout<<"Enter the right child of "<<temp->data<< " : "; 
        cin>>x;
        if(x!=-1){
            temp->right = new Node(x);
            q.push(temp->right); 
        }  
    }
    return 0; 
}
