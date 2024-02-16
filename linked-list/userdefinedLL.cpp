#include<bits/stdc++.h>
using namespace std;
class Node{//use defined datatype
public:
 int data;
 Node *next;
 Node(int x){//user 
     data=x;
     next=NULL;
 }    
};
class linkedlist{//user defined data structure
public:
  Node* head;
  Node* tail;
  int size;
  linkedlist(){
    head= tail = NULL;size = 0;
  }
  void insertAtEnd(int x){
    Node* temp = new Node(x);
    if(size==0){
      head=tail=temp;
    }
    else{
      tail->next=temp;
      tail=temp;
    }
    size++;
}//already 3 ta node create kora hoye gese.
  void insertAthead(int x){
    Node* temp = new Node(x);
    if(size==0){
      head=tail=temp;
    }
    else{
      temp->next=head;
      head=temp;
    }
    size++;
}
  void display(){
  Node* temp = head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
  }
};
int main(){
linkedlist ll;
ll.insertAtEnd(10);
ll.insertAtEnd(20);
ll.insertAtEnd(30);
ll.display();
ll.insertAtEnd(40);
ll.display();
cout<<ll.size<<endl;
//inserted element before head element
ll.insertAthead(50);

ll.display();
}