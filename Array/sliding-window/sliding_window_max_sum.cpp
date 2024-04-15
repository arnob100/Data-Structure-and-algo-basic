#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }
    int maxsum = sum;
    int maxidx = 0;
    int i = 1 ; int j = k;
    while(j<=size) {
        sum = sum - arr[i - 1] + arr[j];
        if (sum > maxsum) {
            maxsum = sum;
            maxidx = i;
        }i++;j++;
    }
    cout << "Maximum subarray sum: " << maxsum << " at index " << maxidx << endl;
    return 0;
}
