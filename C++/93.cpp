class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        backTracking(res,s,"",0,4,1);
        return res;
    }

private:
    void backTracking(vector<string>& res, string& s, string curr, int pos, int remain, int length){
        if(pos == s.size() && remain == 0){
            curr.pop_back();
            res.push_back(curr);   
        }
        while(remain > 0 && pos+length <= s.size()){
            string temp = s.substr(pos,length);
            if(stoi(temp) > 255) return;
            backTracking(res,s,curr+temp+'.',pos+length,remain-1,1);
            if(temp == "0") return;
            length += 1;
        }
    }
};