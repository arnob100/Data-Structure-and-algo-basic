//remove occurence of 'a'from a string 
#include <iostream>
#include <string>

using namespace std;

string removeOccurrence(string str, string str2) {
    if (str.length() == 0) return str2;
    if (str[0] != 'a') {
        return removeOccurrence(str.substr(1), str2 += str[0]);
    } else {
        return removeOccurrence(str.substr(1), str2);
    }
}
void removeOccurrence2(string newstr2, string ans, int index) {
    if (index >= newstr2.length()) {
        cout << ans;
        return;
    }
    if (newstr2[index] != 'a') {
        removeOccurrence2(newstr2, ans + newstr2[index], index + 1);
    } else {
        removeOccurrence2(newstr2, ans, index + 1);
    }
}

int main() {
    string str = "arnob Bakshi";

    // First way
    string newStr = removeOccurrence(str, "");
    cout << "String after removing 'a': " << newStr << endl;

    // Second way
    string ans;
    removeOccurrence2(str, ans, 0);

    return 0;
}
