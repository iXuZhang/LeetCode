// Jump Game II
class Solution {
public:
    int jump(vector<int>& nums) {
        int step = 0, res = 0, curr = 0;
        for(int n : nums){
            if(curr < 0){
                res++;
                curr = step;
            }
            step = max(step,n);
            curr--;
            step--;
        }
        return res;
    }
};