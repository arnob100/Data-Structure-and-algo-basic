#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node *next;
    Node(int data,Node *n) {
        this->data = data;
        this->next = n;
    }
};
int main() {
    Node *a = new Node(1,NULL);
    Node *b = new Node(2,NULL);
    Node *c = new Node(3,NULL);
    Node *d = new Node(4,NULL);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;
    while(a!=NULL){
    cout<<a->data<<" ";
    a=a->next;
  }
//temp node points the same address of a node in the beginning but later traverse the at the last node
    /* Node* temp = a;
    while(temp != NULL) { 
        cout << temp->data << endl;
        temp = temp->next;
    } */
    return 0;
}
