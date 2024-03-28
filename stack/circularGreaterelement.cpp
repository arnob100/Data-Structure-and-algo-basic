#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 4, 2, 5, 6, 9, 12, 15, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans(size, 0);
    stack<int> st;
    for (int i = 0; i < size; i++)
    {
        while (!st.empty() && arr[i] > ans[st.top()])
        {
                   ans[st.top()] = arr[i];
                   st.pop();
        }
        st.push(i);
    }
    for (auto e : ans)
    {
        cout << e << " ";
    }
}