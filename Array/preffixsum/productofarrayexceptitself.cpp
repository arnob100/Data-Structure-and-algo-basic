#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        // Pre
        int p = nums[0];//1
        pre[0] = 1;
        for (int i = 1; i < n; i++) {
            pre[i] = p;
            p = p*nums[i];
        }
        p = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            pre[i] *= p;
            p *= nums[i];
        }
        return pre;
    }
};

int main() {
    Solution solution;
    vector<int> nums;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    vector<int> result = solution.productExceptSelf(nums);

    cout << "Product except self: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
