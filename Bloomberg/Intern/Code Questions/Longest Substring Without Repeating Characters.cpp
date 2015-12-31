/*
    Longest Substring Without Repeating Characters
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        const int n = s.size();
        int table[256] = {0};
        int start = 0;
        for(int i = 0; i < n; i++){
            table[s[i]]++;
            while(table[s[i]] > 1){
                table[s[start]]--;
                start++;
            }
            res = max(res, i - start + 1);
        }
        return res;
    }
};