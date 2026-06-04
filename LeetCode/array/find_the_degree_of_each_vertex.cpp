#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> sum(matrix.size());
        
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                sum[i] += matrix[i][j];
            }
        }

        return sum;
    }
};