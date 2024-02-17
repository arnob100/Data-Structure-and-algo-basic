#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = NULL;
    }
};

class linkedlist {
public:
    Node* head;
    Node* tail;
    int size;

    linkedlist() {
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int x) {
        Node* temp = new Node(x);
        if (size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
            
        }size++;
    }

    void insertAthead(int x) {
        Node* temp = new Node(x);
        if (size == 0) {
            head = tail = temp;
        } else {
            temp->next = head;
            head = temp;
            
        }
        size++;
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;  // Add a newline at the end for better formatting
    }
};

int main() {
    linkedlist ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.print();
    ll.insertAthead(30);
    ll.print();
    return 0;
}
