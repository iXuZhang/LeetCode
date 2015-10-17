// Flip Game
class Solution {
public:
    // Time: O(n), Spcase: O(n)
    vector<string> generatePossibleNextMoves(string s) {
        const int n = s.size();
        vector<string> res;
        for(int i = 0; i + 1 < n; i++){
            if(s[i] == '+' && s[i+1] == '+'){
                s[i] = s[i+1] = '-';
                res.push_back(s);
                s[i] = s[i+1] = '+';
            }
        }
        return res;
    }
};