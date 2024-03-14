#include<bits/stdc++.h>
using namespace std;

class Stack {
public:
    int arr[100];
    int index = -1;

    void push(int x) {
        arr[++index] = x;  // Increment index before assigning the value
    }

    void pop() {
        index--;
    }

    int top() {
        return arr[index];
    }

    int size() {
        return index + 1;
    }
};

int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.size();

    return 0;
}
