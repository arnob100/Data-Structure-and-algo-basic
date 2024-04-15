#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 4, 5, 10, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    // prefix sum
    for (int i = 1; i < size; i++) {
        arr[i] += arr[i - 1];
    }
    // partitioning
    bool flag = false;
    for (int i = 0; i < size - 1; i++) {
        if (2 * arr[i] == arr[size - 1]) {
            flag = true;
            break;
        }
    }
    if (flag) {
        cout << "Partition possible";
    } else {
        cout << "Partition not possible";
    }

    return 0;
}
