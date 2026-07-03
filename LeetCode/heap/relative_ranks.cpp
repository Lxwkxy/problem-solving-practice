#include <vector>
#include <string>
#include <queue>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> pq;

        for (int i = 0; i < score.size(); i++) {
            pq.push(make_pair(score[i], i));
        }

        vector<string> ans(score.size());
        int rank = 0;

        while (!pq.empty()) {
            pair<int, int> top_element = pq.top();
            pq.pop();

            int current_score = top_element.first;
            int index = top_element.second;

            if (rank == 0) ans[index] = "Gold Medal";
            else if (rank == 1) ans[index] = "Silver Medal";
            else if (rank == 2) ans[index] = "Bronze Medal";
            else ans[index] = to_string(rank + 1);

            rank++;
        }

        return ans;
    }
};