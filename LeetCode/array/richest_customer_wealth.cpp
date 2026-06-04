#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> sum(accounts.size());
        for (int i = 0; i < accounts.size(); i++) {
            for (int j = 0; j < accounts[i].size(); j++) {
                sum[i] += accounts[i][j];
            }
        }

        int max = sum[0];
        
        for (int i = 1; i < sum.size(); i++) {
            if (max < sum[i]) max = sum[i];
        }

        return max;
    }
};