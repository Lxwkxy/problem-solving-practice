#include <vector>
#include <utility>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int i = 0; i < n; i++) {
            int r = n - 1;
            for (int l = 0; l < r; l++) {
                swap(matrix[i][l], matrix[i][r--]);
            }
        }
    }
};