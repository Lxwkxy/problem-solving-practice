#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixGcd(n);
        int mx = 0;

        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            prefixGcd[i] = gcd(nums[i], mx);
        }
    
        sort(prefixGcd.begin(), prefixGcd.end());

        long long ans = 0;
        int r = n - 1;

        for (int l = 0; l < r; l++) {
            ans += gcd(prefixGcd[l], prefixGcd[r--]);
        }

        return ans;
    }
};