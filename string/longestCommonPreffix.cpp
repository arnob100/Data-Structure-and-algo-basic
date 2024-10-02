#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> pre;
    pre.push_back("flower");
    pre.push_back("flight");
    pre.push_back("flow");
    sort(pre.begin(), pre.end());
    
    string first = pre.front();
    string last = pre.back();
    
    int size = first.size();
    int i = 0;
    vector<char> ans;
    while (size--) {
        char a = first[i];
        char b = last[i];
        if (a == b) {
            ans.push_back(a);
        } else {
            break;
        }
        i++;
    }

    for (char e : ans) {
        cout << e;
    }

    return 0;
}
