#include <vector>
#include <utility>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if (nums.size() <= 1) return nums;
        
        int l = 0;

        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] % 2 == 0) {
                swap(nums[l++], nums[r]);
            }
        }

        return nums;
    }
};