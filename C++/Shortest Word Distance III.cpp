// Shortest Word Distance III
class Solution {
public:
    int shortestWordDistance(vector<string>& words, string word1, string word2) {
        const int n = words.size();
        int res = INT_MAX;
        int index1 = -n;
        int index2 = -n;
        bool isSame = word1 == word2;
        for(int i = 0; i < n; i++){
            if(words[i] == word1){
                res = min(res, i - index2);
                index1 = i;
            }
            else if(words[i] == word2){
                res = min(res, i - index1);
                index2 = i;
            }
            if(isSame) index2 = index1; 
        }
        return res;
    }
};