#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minVal = nums[0];
        int maxVal = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < minVal) minVal = nums[i];
            if (nums[i] > maxVal) maxVal = nums[i];
        }

        return gcd(minVal, maxVal);
    }
};