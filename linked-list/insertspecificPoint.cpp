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
        }
        size++;
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

    void insertAtindex(int idx, int val) {
        if (idx < 0 || idx > size) {
            cout << "invalid index" << endl;
        } else if (idx == 0) {
            insertAthead(val);
        } else if (idx == size) {
            insertAtEnd(val);
        } else {
            Node* newNode = new Node(val);
            Node* temp = head;
            for (int i = 0; i < idx - 1; i++) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            size++;
        }
    }

    int getelementAt(int idx) {
        if (idx < 0 || idx >= size) {
            return -1;
        } else if (idx == 0) {
            return head->val;
        } else if (idx == size - 1) {
            return tail->val;
        } else {
            Node* temp = head;
            for (int i = 1; i <= idx; i++) {
                temp = temp->next;
            }
            return temp->val;
        }
    }

    void deleteHead() {
        if (size == 0) {
            cout << "List empty" << endl;
            return;
        }
        head = head->next;
        size--;
    }

    void deleteTail() {
        if (size == 0) {
            cout << "List empty" << endl;
            return;
        } else if (size == 1) {
            deleteHead();
            return;
        } else {
            Node* temp = head;
            while (temp->next!= tail) {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }

    void deleteAtindex(int idx) {
        if (idx < 0 || idx >= size) {
            cout << "Invalid index" << endl;
            return;
        } else if (idx == 0) {
            deleteHead();
            return;
        } else if (idx == size - 1) {
            deleteTail();
            return;
        } else {
            Node* temp = head;
            for (int i = 0; i < idx - 1; i++) {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
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
    ll.insertAtindex(1, 50);
    ll.print();
    cout << ll.getelementAt(2) << endl;

    ll.deleteHead();
    ll.print();

    ll.deleteTail();
    ll.print();

    ll.deleteAtindex(1);
    ll.print();

    return 0;
}
