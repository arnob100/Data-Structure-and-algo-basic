#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Queue {
public:
    Node *front, *rear;
    Queue() {
        front = rear = NULL;
    }

    bool IsEmpty() {
        return front == NULL && rear == NULL;
    }

    void push(int x) {
        Node *temp = new Node(x);
        if (IsEmpty()) {
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
    }

    void pop() {
        if (IsEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node *temp = front;
        front = front->next;
        delete temp;
    }

    int start() {
        if (IsEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    }
};

int main() {
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.pop();
    int x = q.start();
    cout << x << endl;
    return 0;
}
