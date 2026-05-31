#include <vector>
#include <utility>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int r = s.size() - 1;
        for (int l = 0; l < r; l++) {
            swap(s[l], s[r--]);
        }
    }
};