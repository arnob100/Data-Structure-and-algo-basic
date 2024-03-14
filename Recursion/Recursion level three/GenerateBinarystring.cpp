//generarte binary string without consecutive 1's
#include <iostream>
#include <string>
using namespace std;
void generateBinary(int n, string str) {
    if (str.length() == n) {
        cout << str << endl;
        return;
    }
    generateBinary(n, str + '0');
    if (str.empty() || str[str.length()-1] == '0') {  
        generateBinary(n, str + '1');
    }
}
int main() {
    cout << "Enter length of the string: ";
    int n;
    cin >> n;
    generateBinary(n, "");
    return 0;
}
