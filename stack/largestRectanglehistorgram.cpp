class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        vector<int> prev(n); 
        vector<int> next(n); 
        if(n == 1){
            return heights[0];
        }
        // Finding next smaller elements
        st.push(n-1);
        for(int i = n-2; i >= 0; i--) {
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if (st.empty()) {
                next[i] = n;
            } else {
                next[i] = st.top();
            }
            st.push(i);
        }
        
        // Clearing stack
        while(!st.empty()){
            st.pop();
        }
        
        // Finding previous smaller elements
        st.push(0);
        prev[0] = -1;
        for(int i = 1; i < n; i++) {
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if (st.empty()) {
                prev[i] = -1;
            } else {
                prev[i] = st.top();
            }
            st.push(i);
        }
        
        // Calculating maximum area
        int maximum = INT_MIN;
        for(int i = 0; i < n; i++){
            int area = heights[i] * (next[i] - prev[i] -1 );
            maximum = max(maximum, area);
        }
        
        return maximum;
    }
};