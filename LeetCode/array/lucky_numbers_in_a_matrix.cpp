#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<int> min(n, INT_MAX), max(m, INT_MIN);
        vector<int> result;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] < min[i]) min[i] = matrix[i][j];
                if (matrix[i][j] > max[j]) max[j] = matrix[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == min[i] && matrix[i][j] == max[j]) {
                    result.push_back(matrix[i][j]);
                    break;
                }
            }
        }

        return result;
    }
};