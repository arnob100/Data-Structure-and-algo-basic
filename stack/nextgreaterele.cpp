#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {3, 4, 2, 5, 6, 9, 12, 15, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans(size, -1); // Initialize ans with size and -1
    int i = 0 ;
    while(i<size){
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] > arr[i]) {
                ans[i] = arr[j];
                break;
            }
        }i++;
    }

    cout << "The new array : ";
    for (auto e : ans) {
        cout << e << " ";
    }

    return 0;
}
