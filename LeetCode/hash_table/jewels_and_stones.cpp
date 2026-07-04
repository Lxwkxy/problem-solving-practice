#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> mySet;
        int count = 0;

        for (char c : jewels) {
            mySet.insert(c);
        }

        for (char c : stones) {
            if (mySet.count(c)) count++;
        }

        return count;
    }
};