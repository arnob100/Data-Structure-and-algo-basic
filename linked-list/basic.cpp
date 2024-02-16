#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int value;
    Node *next;
    Node(int val) {
        value = val;
        next = NULL;
    }
};
int main() {
    Node a(1), b(2), c(3), d(4);
    a.next = &b; b.next= &c; c.next = &d;
    cout << (((a.next)->next)->next)->value << endl;
    cout<<a.next->value<<endl;
    cout<<(a.next)->next->value<<endl;

    //temp node copying from a to temp last element wont be copied
    Node temp =a;
    while(temp.next!=NULL){
        cout<<temp.value<<" "; 
        temp=*(temp.next);    
    }
    
    //new way
    while(1){
        cout<<temp.value<<" "; 
        if(temp.next==NULL)
            break;
        temp=*(temp.next);
    }
    return 0;
    
}
