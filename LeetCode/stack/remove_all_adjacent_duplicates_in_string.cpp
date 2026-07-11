#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> myStack;
        
        for (auto i : s) {
            if (!myStack.empty() && i == myStack.top()) {
                myStack.pop();
            } else {
                myStack.push(i);
            }
        }

        string ans(myStack.size(), ' ');

        for (int i = ans.size() - 1; i >= 0; i--) {
            ans[i] = myStack.top();
            myStack.pop();
        }

        return ans;
    }
};