#include <iostream>
#include <algorithm>
using namespace std;

class minHeap {
public:
    int arr[50];
    int idx;
    minHeap() {
        idx = 1;
    }

    int top() {
        if (idx == 1) return -1; // Return -1 or any other indicator if the heap is empty
        return arr[1];
    }

    void push(int val) {
        arr[idx] = val;
        int i = idx;
        idx++;
        while (i != 1) { // Fix the comparison to maintain the min heap property
            if (arr[i] < arr[i / 2]) {
                swap(arr[i], arr[i / 2]);
            } else {
                break;
            }
            i = i / 2;
        }
    }

   void pop() { 
    idx--;
    arr[1] = arr[idx]; 
    int i = 1;
    while (true) {
        if (2*i >= idx || 2*i+1 >= idx) break; // Check if child indices are out of bounds
        if (arr[2*i] > arr[2*i+1] && arr[2*i+1] < arr[i]) {
            swap(arr[2*i+1], arr[i]);
            i = 2*i + 1;
        } else if (arr[2*i] < arr[2*i+1] && arr[2*i] < arr[i]) {
            swap(arr[2*i], arr[i]);
            i = 2*i;
        } else {
            break;
        }
    }
}

    bool empty() {
        return idx == 1;
    }
};

int main() {
    minHeap pq;
    pq.push(6);
    pq.push(2);
    pq.push(1);
    pq.push(8);
    pq.push(-2);
    pq.pop();
    pq.pop();
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}
