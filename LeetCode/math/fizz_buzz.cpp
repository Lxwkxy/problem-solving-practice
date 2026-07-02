#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);
        
        for (int i = 0; i < n; i++) {
            int curr = i + 1;
            if (curr % 3 == 0 && curr % 5 == 0) answer[i] = "FizzBuzz";
            else if (curr % 3 == 0) answer[i] = "Fizz";
            else if (curr % 5 == 0) answer[i] = "Buzz";
            else answer[i] = to_string(curr);
        }

        return answer;
    }
};