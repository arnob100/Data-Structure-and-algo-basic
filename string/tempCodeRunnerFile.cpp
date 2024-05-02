#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Arnob";
    int n = str.length();
    str(str.rbegin(),str.rend());
    cout<<str;
    return 0;
}