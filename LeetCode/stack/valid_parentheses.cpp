#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        for (auto i : s) {
            if (i == '(' || i == '{' || i == '[') {
                myStack.push(i);
            }
            else if (i == ')') {
                if (myStack.empty() || myStack.top() != '(') {
                    return false;
                }
                myStack.pop();
            }
            else if (i == '}') {
                if (myStack.empty() || myStack.top() != '{') {
                    return false;
                }
                myStack.pop();
            }
            else if (i == ']') {
                if (myStack.empty() || myStack.top() != '[') {
                    return false;
                }
                myStack.pop();
            }
        }

        return myStack.empty();
    }
};