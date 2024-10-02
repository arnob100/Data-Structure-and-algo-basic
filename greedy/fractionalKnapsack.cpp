#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<int, int>& p1, pair<int, int>& p2) {
    double r1 = (p1.first * 1.0) / p1.second;
    double r2 = (p2.first * 1.0) / p2.second;
    return r1 > r2;
}

double fractionalKnapsack(vector<int> profit, vector<int> weight, int n, int W) {
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++) {
        arr.push_back({ profit[i], weight[i] });
    }
    sort(arr.begin(), arr.end(), cmp);
    double result = 0.0;
    for (int i = 0; i < n; i++) {
        if (arr[i].second <= W) {
            result += arr[i].first;
            W -= arr[i].second;
        } else {
            result += ((arr[i].first * 1.0) / arr[i].second) * W;
            W = 0;
            break;
        }
    }
    return result;
}
int main() {
    vector<int> profit = { 60, 100, 120 };
    vector<int> weight = { 10, 20, 30 };
    int W = 50;
    int size = 3;
    double r = fractionalKnapsack(profit, weight, size, W);
    cout << r << endl;

    return 0;
}
