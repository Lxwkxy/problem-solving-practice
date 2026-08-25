#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> mySet;

        for (const auto& num : nums) {
            if (num % k == 0) mySet.insert(num);
        }

        int result;
        int j = k;

        while (true) {
            if (mySet.find(j) == mySet.end()) {
                result = j;
                break;
            }
            j += k;
        }

        return result;
    }
};