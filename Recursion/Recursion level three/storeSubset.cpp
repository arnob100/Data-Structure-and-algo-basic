//store subset in a vector
#include<bits/stdc++.h>
using namespace std;
void storeSubset(vector<string>& str, string original, string ans) {
    if (original.length() == 0) {
        str.push_back(ans);
        return;
    }
    storeSubset(str, original.substr(1), ans + original[0]);
    storeSubset(str, original.substr(1), ans);
}
int main() {
    string Str = "abcd";
    vector<string> str;
    storeSubset(str, Str, "");
    for (auto e : str) {
        cout << e << endl;
    }
    return 0;
}
