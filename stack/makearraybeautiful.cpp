//a array a beautiful if adacent element have same sign(non negative/negative)
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    vector<int> makeBeautiful(vector<int>& arr) {
        stack<int> st;
        vector<int> result;
        for(int i = 0 ; i < arr.size() ; i++) {
            if(st.empty()) {
                st.push(arr[i]);
            } else if(arr[i] >= 0) {
                if(st.top() >= 0) {
                    st.push(arr[i]);
                } else {
                    st.pop();
                }
            } else {
                if(st.top() < 0) {
                    st.push(arr[i]);
                } else {
                    st.pop();
                }
            }
        }
        while(!st.empty()) {
           result.push_back(st.top());
           st.pop();
        }
        reverse(result.begin(), result.end()); 
        return result;
    }
};