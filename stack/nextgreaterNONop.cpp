#include<bits/stdc++.h>
using namespace std;

vector<int> prearr(vector<int>& arr, int size) {
    stack<int> st;
    vector<int> ans(size, -1);
    for (int i = 0; i < size; i++) {
        while (!st.empty() && arr[st.top()] < arr[i]) {
            ans[st.top()] = arr[i];
            st.pop(); 
        }
        st.push(i);
    }
    return ans;
}

int main() {
    int arr[] = {8, 6, 4, 7, 9, 10, 12, 5};
    int sn = sizeof(arr) / sizeof(arr[0]);
    vector<int> arrVec(arr, arr + sn); 
    vector<int> ne = prearr(arrVec, sn); 
    for (auto e : ne) {
        cout << e << " ";
    }
    return 0; 
}
