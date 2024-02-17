#include <bits/stdc++.h>
using namespace std;
void toh(int tower, string a, string b, string c) {
    if (tower == 0) return;
    toh(tower - 1, a, c, b);
    cout << a << " -> " << c << '\n'; 
    toh(tower - 1, b, a, c);
}
int main() {
    int tower;
    cin >> tower;
    toh(tower, "a", "b", "c");
}
