#include <vector>
using namespace std;

class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> sum(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            while(nums[i] > 0) {
                sum[i] += nums[i] % 10; 
                nums[i] /= 10;
            }
        }
        int min = sum[0];
        for (int i = 1; i < sum.size(); i++) {
            if (sum[i] < min) {
                min = sum[i];
            }
        }
        return min;
    }
};