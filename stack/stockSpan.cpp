#include <bits/stdc++.h>
using namespace std;
class StockSpanner {
public:
    stack<pair<int,int>> st; //price,span
    int next(int price) {
        int span = 1;

        while(!st.empty() && st.top().first <= price)
        {
            span = span + st.top().second;
            st.pop();
        }
        st.push({price,span});   

        return span;  
    }
};

int main() {
    StockSpanner* obj = new StockSpanner();
    int prices[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(prices) / sizeof(prices[0]);
    for(int i = 0; i < n; i++) {
        cout << "Next price: " << prices[i] << ", Span: " << obj->next(prices[i]) << endl;
    }
    return 0;
}
