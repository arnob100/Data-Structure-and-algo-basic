#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cout << "enter row and col: ";
    cin >> row >> col;
    vector<vector<int>> arr(row, vector<int>(col));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int ele;
            cin >> ele;
            arr[i][j] = ele;
        }
    }
    for (int i = row-1; i>=0 ; i--) {
        if(i%2==0){
        for (int j = 0; j < col; j++) {
            cout<<arr[i][j]<<" ";
           
        }
        }else{
          for (int j = col-1; j >= 0; j--) {
           cout<<arr[i][j]<<" ";
        }
        }
        cout << endl;
    }
    
    return 0;
}
