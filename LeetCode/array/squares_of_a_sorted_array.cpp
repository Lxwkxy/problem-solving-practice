#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr(nums.size());
        int l = 0;
        int r = nums.size() - 1;
        for (int i = 0; i < nums.size(); i++) {
            nums[i] *= nums[i];
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[r] > nums[l]) {
                arr[i] = nums[r--];
            }
            else {
                arr[i] = nums[l++];
            }
        }
        return arr;
    }
};