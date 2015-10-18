// Shortest Word Distance
class Solution {
public:
    // Time: O(n), Space: O(1)
    int shortestDistance(vector<string>& words, string word1, string word2) {
        const int n = words.size();
        int index1 = -n;
        int index2 = -n;
        int res = INT_MAX;
        for(int i = 0; i < n; i++){
            if(words[i] == word1){
                res = min(res, i - index2);
                index1 = i;
            } 
            else if(words[i] == word2){
                res = min(res, i - index1);
                index2 = i;
            } 
        }
        return res;
    }
};