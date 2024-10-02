#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> nearlySorted(int arr[], int num, int K) {
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> result;
        int i;

        for (i = 0; i < num; ++i) {
            pq.push(arr[i]);
            if (pq.size() > K) {
                result.push_back(pq.top());
                pq.pop();
            }
        }

        while (!pq.empty()) {
            result.push_back(pq.top());
            pq.pop();
        }

        return result;
    }
};

int main() {
    Solution sol;
    int arr[] = {2, 6, 3, 12, 56, 8};
    int num = sizeof(arr) / sizeof(arr[0]);
    int K = 3;
    vector<int> result = sol.nearlySorted(arr, num, K);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
