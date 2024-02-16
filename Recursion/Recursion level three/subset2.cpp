#include<bits/stdc++.h>
using namespace std;

void storeSubset(vector<string>& str, string original, string ans, bool flag) {
    if (original.length() == 0) {
        str.push_back(ans);
        return;
    }
    char ch = original[0];
    if (original.length() == 1) {
        if (flag == true)
            storeSubset(str, original.substr(1), ans + ch, true);
        storeSubset(str, original.substr(1), ans, true);
    } else {
        char sh = original[1];
        if (ch == sh) {
            if (flag == true)
            storeSubset(str, original.substr(1), ans + ch, true);
            storeSubset(str, original.substr(1), ans, false);
        } else {
            if (flag == true)
            storeSubset(str, original.substr(1), ans + ch, true);
            storeSubset(str, original.substr(1), ans, true);
        }
    }
}

int main() {
    string Str = "aaab";
    vector<string> str;
    storeSubset(str, Str, "", true);

    for (auto e : str) {
        cout << e << endl;
    }

    return 0;
}
