#include<bits/stdc++.h>
using namespace std;
void combinationSum(vector<int>& v, int arr[], int size, int target, int index){
    if(target == 0){
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }
    if(target < 0) return;
    for(int i = index; i < size; i++){
        v.push_back(arr[i]);
        combinationSum(v, arr, size, target - arr[i], i);
        v.pop_back();
    }
}
int main(){
    int arr[] = {2, 3, 5};
    vector<int> v;
    int size = sizeof(arr) / sizeof(arr[0]);
    combinationSum(v, arr, size, 8, 0);
    return 0;
}
