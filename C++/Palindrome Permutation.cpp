// Palindrome Permutation
class Solution {
public:
    // Time: O(n), Space: O(n)  
    // Only a set is enough
    bool canPermutePalindrome(string s) {
        unordered_set<char> table;
        for(char c : s){
            if(table.count(c)) table.erase(c);
            else table.insert(c);
        }
        return table.size() < 2;
    }
};