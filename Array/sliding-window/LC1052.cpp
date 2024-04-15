class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int k = minutes;
        
        // Calculating loss of satisfaction
        int prevloss = 0;
        for (int i = 0; i < k; i++) {
            if (grumpy[i] == 1) prevloss += customers[i]; 
        }
        
        int maxloss = prevloss;
        int maxidx = 0;
        int curloss = prevloss;
        // Sliding window to find maximum loss of satisfaction
        for (int i = 1, j = k; j < n; i++, j++) {
            if (grumpy[j] == 1) curloss += customers[j];
            if (grumpy[i - 1] == 1) curloss -= customers[i - 1]; 
            
            if (curloss > maxloss) {
                maxloss = curloss;
                maxidx = i;
            }
        }
        for (int i = maxidx; i < maxidx + k ; i++) {
            grumpy[i] = 0;
        }
        
        // Calculating maximum satisfaction
        int satisfaction = 0;
        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0) satisfaction += customers[i];
        }
        
        return satisfaction;
    }
};
