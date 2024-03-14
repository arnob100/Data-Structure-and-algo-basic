#include<bits/stdc++.h>
using namespace std;
int main() {
    stack<int> st;
    int n;
    cin >> n;
    while (n--) {
        int element;
        cin >> element;
        st.push(element);
    }
    stack<int> temp;
    while (!st.empty()) {
        cout<<"the elements are : "<<endl;
        cout << st.top() << endl;
        temp.push(st.top());
        st.pop();
    }
    cout << "Current size of stack: " << st.size() << endl;
    while (!temp.empty()) {
        cout << temp.top() << endl;
        st.push(temp.top());
        temp.pop();
    }
    cout << "Current size of stack: " << st.size() << endl;
    return 0;
}
