#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        vector<int> sum(m);

        for (int i = 0; i < m; i++) {
            int n = mat[i].size();
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0) break;
                sum[i] += mat[i][j];
            }
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        for (int i = 0; i < m; i++) {
            minHeap.push(make_pair(sum[i], i));
        }
        
        vector<int> ans(k);

        for (int i = 0; i < k; i++) {
            ans[i] = minHeap.top().second;
            minHeap.pop();
        }
        
        return ans;
    }
};