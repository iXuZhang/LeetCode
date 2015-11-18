// Count and Say
class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        while(n-->1){
            string temp;
            int count = 1;
            for(int i = 0; i < res.size(); i++){
                if(i+1 < res.size() && res[i] == res[i+1]) count++;
                else {
                    temp += to_string(count) + res[i];
                    count = 1;
                }
            }
            res = temp;
        }
        return res;
    }
};