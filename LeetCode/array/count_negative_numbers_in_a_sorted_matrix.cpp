#include <vector>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;

        for (int i = 0; i < grid.size(); i++) {
            int n = grid[i].size();
            int l = 0;
            int r = n - 1;
            while (l <= r) {
                int m = l + (r - l) / 2;

                if (grid[i][m] >= 0) {
                    l = m + 1;
                }
                else {
                    r = m - 1;
                }
            }
            count += (n - l);
        }

        return count;
    }
};