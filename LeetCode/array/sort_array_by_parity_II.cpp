#include <vector>
#include <utility>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        if (nums.size() <= 1) return nums;

        int even = 0, odd = 1;

        while (even < nums.size() && odd < nums.size()) {
            if (nums[even] % 2 == 0) even += 2;
            else if (nums[odd] % 2 != 0) odd += 2;
            else {
                swap(nums[even], nums[odd]);
                even += 2;
                odd += 2;
            }
        }

        return nums;
    }
};