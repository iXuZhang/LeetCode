class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        while(n-->1){
            string prev = res;
            res = "";
            auto iter = prev.begin();
            while( iter != prev.end()){
                int count = 1;
                while(*(iter+1) == *iter && iter+1 != prev.end()){
                    iter++;
                    count++;
                }
                res += to_string(count) + *iter;
                iter++;
            }
        }
        return res;
    }
};