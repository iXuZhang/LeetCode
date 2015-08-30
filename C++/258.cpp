class Solution {
public:
    // periodical pattern
    // cycle length: 9
    int addDigits(int num) {
        return 1 + (num - 1) % 9;
    }
};