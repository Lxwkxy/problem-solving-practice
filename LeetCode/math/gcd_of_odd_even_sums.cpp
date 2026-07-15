class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = n * n;
        int sumEven = n * (n + 1);

        int a = sumEven, b = sumOdd;

        while (b > 0) {
            int r = a % b;
            a = b;
            b = r;
        }

        return a;
    }
};