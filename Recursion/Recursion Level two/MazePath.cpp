#include <bits/stdc++.h>
using namespace std;
int maze(int sr, int sc, int endRow, int endCol) {
    if (sr > endRow || sc > endCol) {
        return 0;  // Base case: Out of bounds
    }
    if (sr == endRow && sc == endCol) {
        return 1;  // Base case: Reached the destination
    }
    // Recursive calls to explore right and down paths
    int rightWay = maze(sr, sc + 1, endRow, endCol);
    int downWay = maze(sr + 1, sc, endRow, endCol);
    return rightWay + downWay;  // Sum up the ways from both paths
}
void printmaze(int sr, int sc, int endRow, int endCol , string s) {
    if (sr > endRow || sc > endCol) {
        return;
    }
    if (sr == endRow && sc == endCol) {
       cout<<s<<endl;return;
    }
    printmaze(sr, sc + 1, endRow, endCol , s+'R');
    printmaze(sr + 1, sc, endRow, endCol ,s+'D');
}
int main() {
    int numWays = maze(1, 1, 3, 3);
    cout << "The number of ways to reach the destination: " << numWays << endl;
    printmaze(1,1,3,3,"");
    return 0;  
}
