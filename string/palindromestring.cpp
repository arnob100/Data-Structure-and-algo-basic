#include <iostream>
#include <string>
using namespace std;

string isPalindrome(const string &str){
    string newstr(str.rbegin(), str.rend());
    if(str == newstr){
        return "String is palindrome";
    }
    return "String is not palindrome";
}

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << isPalindrome(str);
    return 0;
}
