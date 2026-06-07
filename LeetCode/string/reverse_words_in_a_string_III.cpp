#include <string>
#include <utility>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int l = 0;

        for (int r = 0; r <= s.size(); r++) {
            if (r == s.size() || s[r] == ' ') {
                int left = l, right = r - 1;
                
                while (left < right) {
                    swap(s[left++], s[right--]);
                }
                
                l = r + 1;
            }   
        }
        
        return s;
    }
};