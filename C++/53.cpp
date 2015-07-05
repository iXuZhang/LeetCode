class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int submax = nums.front();
        for(auto i = nums.begin()+1;i != nums.end();++i){
            *i = max(*i,*i+*(i-1));
            if(*i>submax) submax = *i;
        }
        return submax;
    }
};