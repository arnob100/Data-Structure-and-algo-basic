//a frog can jump one or three step find out the min cost
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> 
using namespace std;  
int frogJump(int arr[], int size, int index) {
  if (index == size - 1) {
    return 0;
  } else if (index == size - 2) {
    return abs(arr[index] - arr[index + 1]) + frogJump(arr, size, index + 1);
  } else {
    return min(
      abs(arr[index] - arr[index + 1]) + frogJump(arr, size, index + 1),
      abs(arr[index] - arr[index + 2]) + frogJump(arr, size, index + 2)
    );
  }
}
//TC = 2 raised to the power n

int main() {
  int arr[] = {10, 30, 40, 20};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << frogJump(arr, size, 0) << endl;
  return 0;
}
