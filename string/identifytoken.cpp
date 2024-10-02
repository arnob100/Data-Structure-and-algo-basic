#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    stringstream ss(str);
    string temp;
    while (ss >> temp) {
        if (temp == "+" || temp == "-" || temp == "*" || temp == "/") {
            cout << temp << " is an operator" << endl;
        }
        else if (temp == "if" || temp == "else" || temp == "for" || temp == "while" || temp == "do") {
            cout << temp << " is a keyword" << endl;
        }
        else if(temp >= "1" && temp <= "9"){
           cout<<temp<< " is a number";
        }
        else{
            cout<<temp << " is a identifier"<<endl;
        }
    }
    return 0;
}
