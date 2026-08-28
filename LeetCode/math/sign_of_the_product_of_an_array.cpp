#include <vector>

using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int product = 1;

        for (const auto& i : nums) {
            if (i < 0) {
                product *= -1;
            } else if (i == 0) {
                return 0;
            }
        }

        return product;
    }
};