class Solution {
public:
    int sum(int x, int n) {
        int k = n / x;
        return x * k * (k + 1) / 2;
    }

    int sumOfMultiples(int n) {
        return sum(3, n) + sum(5, n) + sum(7, n)
             - sum(15, n) - sum(21, n) - sum(35, n)
             + sum(105, n);
    }
};