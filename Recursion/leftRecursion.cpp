#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string str;
    char choice;
    
    do {
        cout << "Enter the string: ";
        getline(cin, str);

        char first = str[0];
        stringstream s(str.substr(3)); 
        string token;
        vector<string> p;
        while (getline(s, token, '|')) { // Changed here
            p.push_back(token);
        }
        
        bool leftRecursionPossible = false;
        for (string& e : p) {
            if (!e.empty() && e[0] == first) { // Added a check to prevent accessing an empty string
                leftRecursionPossible = true;
                break;
            }
        }
        if (leftRecursionPossible) {
            cout << "Left recursion is possible." << endl;
            cout << "The answer is:" << endl;
            for (int i = 0; i < p.size(); ++i) {
                if (!p[i].empty() && p[i][0] == first) { // Added a check to prevent accessing an empty string
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
        
        cout << "Do you want to enter another string? (Y/N): ";
        cin >> choice;
        cin.ignore(); 
    } while (choice == 'Y' || choice == 'y');

    return 0;
}
