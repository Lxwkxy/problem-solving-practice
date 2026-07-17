#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> table;

        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);

            for (int j = 1; j < i; j++) {
                row[j] = table[i - 1][j] + table[i - 1][j - 1];
            }

            table.push_back(row);
        }

        return table;
    }
};