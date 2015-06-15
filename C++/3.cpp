class Solution {
public:
/* Version 1 Hash table
    int lengthOfLongestSubstring(string s) {
        int max = 0, min = 0, i =0;
        map<char, int> subString;
        for(; i < s.size(); i++){
            if (subString.find(s[i]) != subString.end() && subString[s[i]] >= min){
                max > i - min ? 0:max=i - min;
                min = subString[s[i]] + 1;
            }
            subString[s[i]] = i;
        }
        max > i - min ? 0:max = i - min;
        return max;
    }
*/

//Version 2 Awesome
    int lengthOfLongestSubstring(string s) {
        vector<int> mymap(256,-1);
        int i,last=0,ans=0;
        for(i=0;i<s.length();i++) {
            if(mymap[s[i]]==-1 || mymap[s[i]]<last)
                ans = max(ans,i-last+1);
            else
                last = mymap[s[i]]+1;
            mymap[s[i]]=i;
        }
        return ans;
    }
};