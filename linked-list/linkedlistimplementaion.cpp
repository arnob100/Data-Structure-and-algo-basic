#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void printNode(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
Node *a = new Node(1);
Node *b = new Node(2);
Node *c = new Node(3);
Node *d = new Node(5);
Node *e = new Node(6);
a->next = b;
b->next =c;
c->next = d;
d->next = e;
printNode(a);
}