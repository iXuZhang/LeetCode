// Additive Number
class Solution {
public:
    bool isAdditiveNumber(string num) {
        if(num.empty()) return true;
        const int n = num.size();
        for(int i = 0; i <= n/2; i++){
            if(num[0] == '0' && i > 0) break;
            long prev = stol(num.substr(0,i+1)); // 0 -> i
            for(int j = i+1; j < n; j++){
                if(num[i+1] == '0' && j > i+1) break;
                long curr = stol(num.substr(i+1, j-i)); // i+1 -> j
                string target = to_string(prev + curr); // j+1 -> j+len
                int len = target.size();
                if(j+len < n && target == num.substr(j+1,len) && helper(num.substr(j+1+len), curr, prev+curr)) return true;
            }
        }        
        return false;
    }
private:
    bool helper(string num, long prev, long curr){
        if(num.empty()) return true;
        string target = to_string(prev+curr);
        const int len = target.size();
        return target == num.substr(0,len)? helper(num.substr(len), curr, prev+curr) : false;
    }
};