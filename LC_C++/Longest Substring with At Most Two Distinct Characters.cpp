// Longest Substring with At Most Two Distinct Characters
class Solution {
public:
    // "aabbcccc"
    // at most k distinct characters
    // two pointers and a hash table
    int lengthOfLongestSubstringTwoDistinct(string s) {
        if(s.empty()) return 0;
        int table[256] = {0};
        int res = 0;
        int start = 0;
        int count = 0;
        int k = 2;
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(table[s[i]] == 0) count++;
            table[s[i]]++;
            while(count > k){
                table[s[start]]--;
                if(table[s[start]] == 0) count--;
                start++;
            }
            res = max(res, i - start + 1);
        }
        return res;
    }
};