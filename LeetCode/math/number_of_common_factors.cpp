#include <numeric>

using namespace std;

class Solution {
public:
    int commonFactors(int a, int b) {
        int diff = gcd(a, b);
        int count = 0;

        for (int i = 1; i <= diff; i++) {
            if (a % i == 0 && b % i == 0) {
                count++;
            }
        }

        return count;
    }
};