class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        auto iter = s.rbegin();
        while(*iter==' ') ++iter;
        while(iter!=s.rend()&&*iter!=' '){
            ++iter;
            ++length;
        }
        return length;
    }
};