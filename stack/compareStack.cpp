//ab# ac# . if i type # it means backspace 
//after backspace if it matched then it will be equal stack
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> stc;
        for (char c : s) {
            if (c != '#') {
                st.push(c);
            } else if (!st.empty()) {
                st.pop();
            }
        }

        for (char c : t) {
            if (c != '#') {
                stc.push(c);
            } else if (!stc.empty()) {
                stc.pop();
            }
        }
        while (!st.empty() && !stc.empty()) {
            if (st.top() != stc.top()) {
                return false;
            }
            st.pop();
            stc.pop();
        }
        return st.empty() && stc.empty();//duita already empty hoye gese
    }
};
