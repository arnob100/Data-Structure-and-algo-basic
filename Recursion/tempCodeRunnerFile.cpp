#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cout << "string : ";
    getline(cin, str);
    
    char first = str[0];
    stringstream s(str.substr(3)); 
    string token;
    vector<string> p;
    while (getline(s, token, '|')) {
        p.push_back(token);
    }
    bool leftRecursionPossible = false;
    for (string& e : p) {
        if (e[0] == first) {
            leftRecursionPossible = true;
            break;
        }
    }
    if (leftRecursionPossible) {
        cout << "Left recursion is possible." << endl;
        cout << "The ans is" << endl;
        for (int i = 0; i < p.size(); ++i) {
            if (p[i][0] == first) {
                string alpha = p[i].substr(1);
                for (int j = 0; j < p.size(); ++j) {
                    if (i != j) {
                        cout << first << " -> " << p[j] << first << "'" << endl;
                        cout << first << "' -> " << alpha << first << "' | ε" << endl;
                    }
                }
                break;
            }
        }
    } else {
        cout << "Left recursion is not possible." << endl;
    }

    return 0;
}
