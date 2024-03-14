#include<bits/stdc++.h>
using namespace std;
Class Node{
public:
  int data;
  Node *next;
  Node(int x){
    data=x;
    next=NULL;
  }
};
void displayRecursiveApproach(Node *head){
     if(head==NULL){
         return;
     }
     cout<<head->data<<" ";
     displayRecursiveApproach(head->next);
}
int main(){
  Node *head=new Node(1);
  Node *second=new Node(2);
  Node *third=new Node(3);
  Node *fourth=new Node(4);
  Node *tail = new Node(5);
  head->next=second;
  secod->next=third;
  third->next=fourth;
  fourth->next=tail;
  tail->next=NULL;
  displayRecursiveApproach(head);
  //everytime new local variable is created, it is created at the top of the stack.
  //so the time complexity is O(n) whereas in nonrecursive approach it is O(n)
}