#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr(n * 2);
        int l = 0, r = n;
        for (int i = 0; i < n * 2; i += 2) {
            arr[i] = nums[l++];
            arr[i + 1] = nums[r++];
        }

        return arr;
    }
};