#include <iostream>
using namespace std;
class Queue {
private:
    int *arr;
    int size, front, rear;

public:
    Queue(int n) {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }

    bool IsEmpty() {
        return front == -1;
    }

    bool IsFull() {
        return (rear+1)%size == front;
    }

    void push(int x) {
        if (IsFull()) {
            cout << "Queue overflow" << endl;
            return;
        }
        if (IsEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1)%size;
        }
        arr[rear] = x;
    }

    void pop() {
        if (IsEmpty()) {
            cout << "Queue underflow" << endl;
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1)%size;
        }
    }

    int start() {
        if (IsEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }
};

int main() {
    Queue q(5);
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(25);

    cout << "Front element: " << q.start() << endl;

    q.pop();
    cout << "Front element after popping: " << q.start() << endl;

    q.push(30);
    q.push(35);

    cout << "Front element after pushing again: " << q.start() << endl;

    while (!q.IsEmpty()) {
        cout << "Popping: " << q.start() << endl;
        q.pop();
    }

    cout << "Is queue empty? " << (q.IsEmpty() ? "Yes" : "No") << endl;
    cout << "Trying to pop from empty queue: ";
    q.pop();
    cout << "Trying to get front element from empty queue: ";
    cout << q.start() << endl;
    return 0;
}
