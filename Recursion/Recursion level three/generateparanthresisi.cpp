#include <vector>
#include <string>

class Solution {
public:
    void helper(std::vector<std::string>& finaAns, int n, int open, int close, std::string bracket) {
        if (close == n) {
            finaAns.push_back(bracket);
            return;
        }

        if (open < n) {
            helper(finaAns, n, open + 1, close, bracket + '(');
        }
        if (close < open) {
            helper(finaAns, n, open, close + 1, bracket + ')');
        }
    }

    std::vector<std::string> generateParenthesis(int n) {
        int open = 0;
        int close = 0;
        std::vector<std::string> finaAns;
        helper(finaAns, n, open, close, "");
        return finaAns;
    }
};
