#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency;

        for (const auto& i : nums) {
            frequency[i]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        for (const auto& i : frequency) {
            int num = i.first;
            int count = i.second;
            
            minHeap.push({count, num});

            if (minHeap.size() > k) minHeap.pop();
        }

        vector<int> ans;

        while (!minHeap.empty()) {
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return ans;
    }
};