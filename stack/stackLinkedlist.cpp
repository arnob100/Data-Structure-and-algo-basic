#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int v) {
        data = v;
        next = nullptr; 
    }
};
int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    Node* head = nullptr; 
    while (!st.empty()) {
        Node* b = new Node(st.top());
        st.pop();
        b->next = head; // Fix the order of assignment
        head = b; // Update head to point to the newly created node
    }
    Node* it = head;
    while (it) {
        cout << it->data << " ";
        it = it->next;
    }
    cout << endl;
    return 0;
}
