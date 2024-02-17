#include<bits/stdc++.h>
using namespace std;

class bird{
public:
    string wings;
    int age;
    float height;
    string color;

    // Correct the constructor to initialize color properly
    bird(string w, int a, string colors, float h){
        wings = w;
        age = a;
        height = h;
        color = colors;
    }
};
void change(string *s){
    s.wings = "yellow"; 
}
int main() { 
    bird *b = new bird("two", 23, "green", 14.5);
    change(b);
    cout << b.wings << " " << b.age << " " << b.height << " " << b.color << endl;
    cout<<b.wings<<endl;
    return 0; // Add a return statement
}
