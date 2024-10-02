class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>ans;
        int i = 0 ; 
        int row = matrix.size();
        int col = matrix[0].size();
        for(int i = 0 ; i<row; i++){
              for(int j = 0 ; j<col;j++){
                ans.push_back(matrix[i][j]);
              }
        }
        priority_queue<int>pq;
        for(int i = 0 ; i<ans.size();i++){
             pq.push(ans[i]);
             if(pq.size()>k){
                pq.pop();
             }
        }
        return pq.top();

    }
};