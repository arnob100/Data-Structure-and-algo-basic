#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    stringstream ss(str);
    string temp;
    vector<string> store;
    
    while(ss >> temp) {
         store.push_back(temp);
    }
    sort(store.begin(), store.end());

    int count = 1;
    int maxCount = 1;
    for(int i = 1; i < store.size(); i++) {
        if(store[i] == store[i - 1]) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 1;
        }
    }
    cout << "Maximum consecutive occurrence: " << maxCount << endl;

    map<string, int> word;
    for(auto w : store) {
        word[w]++;
    }

    string tm;
    for(auto e : word) {
        if(e.second == maxCount) {
            tm = e.first;
            cout << tm << " has the maximum consecutive occurrence of " << maxCount << endl;
            break; 
        }
    }

    return 0;
}
