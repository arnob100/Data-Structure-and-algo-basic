#include <iostream> 
using namespace std;
int count_set_bits(int n){
    int count = 0;
    while(n>0){
        count++;
        n = n&(n-1);
    }
    return count;
}

int main(){
    int a = count_set_bits(21);
    cout << a;
    return 0;
}
/* 
n = 21
1st iteration:
count = 0
n = 21 (binary: 10101)
count incremented to 1
n = n & (n - 1) = 21 & 20 = 20 (binary: 10100)
2nd iteration:
count = 1
n = 20 (binary: 10100)
count incremented to 2
n = n & (n - 1) = 20 & 19 = 16 (binary: 10000)

3rd iteration:
count = 2
n = 16 (binary: 10000)
count incremented to 3
n = n & (n - 1) = 16 & 15 = 0 (binary: 0)

End of loop:
Since n is now 0, the loop terminates.

Final count: 3 */
